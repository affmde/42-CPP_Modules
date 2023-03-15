/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:34:45 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/15 11:59:48 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string.h>
#include <iomanip>


PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::Add(Contact contact)
{
	contacts[index] = contact;
	index++;
	if (index >= 8)
		index = 0;
}


void	PhoneBook::Menu(void)
{
	std::string input;

	while (1)
	{
		if (std::cin.eof())
			exit (0);
		std::cout << "Write \"ADD\" to add a new contact." << std::endl;
		std::cout << "Write \"SEARCH\" to search for a contact" << std::endl;
		std::cout << "Write \"EXIT\" to exit the PhoneBook." << std::endl;
		getline(std::cin, input, '\n');
		if (input.compare("ADD") == 0)
			this->NewContactMenu();
		else if (input.compare("SEARCH") == 0)
			this->Search();
		else if (input.compare("EXIT") == 0 || std::cin.eof())
			exit(0);
		else
			std::cout << "\033[31mInvalid input.\e[0m" << std::endl;
	}

}

int	IsDigit(std::string number)
{
	int i;

	i = 0;
	while (number[i])
	{
		if (!(number[i] >= 48 && number[i] <=57))
			return (1);
		i++;
	}
	return (0);
}

int	CheckValidContact(Contact *contact)
{
	if (!(contact->GetFirstname().length() > 0))
		return (1);
	if (!(contact->GetLastName().length() > 0))
		return (1);
	if (!(contact->GetNickname().length() > 0))
		return (1);
	if (!(contact->GetNumber().length() > 0))
		return (1);
	if (!(contact->GetNumber().length() > 0))
		return (1);
	if (contact->GetNumber().length() > 12)
		return (1);
	if (IsDigit(contact->GetNumber()))
		return (1);
	if (!(contact->GetSecret().length() > 0))
		return (1);
	return (0);
}

void	PhoneBook::NewContactMenu(void)
{
	Contact	newContact;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	number;

	if (!std::cin.eof())
	{
		std::cout << "\033[104mWhat is your first name?\e[0m" << std::endl;
		std::getline(std::cin, first_name, '\n');
		newContact.SetFirstName(first_name);
	}
	if (!std::cin.eof())
	{
		std::cout << "\033[104mWhat is your last name?\e[0m" << std::endl;
		std::getline(std::cin, last_name, '\n');
		newContact.SetLastname(last_name);
	}
	if (!std::cin.eof())
	{
		std::cout << "\033[104mWhat is your nickname?\e[0m" << std::endl;
		std::getline(std::cin, nickname, '\n');
		newContact.SetNickname(nickname);
	}
	if (!std::cin.eof())
	{
		std::cout << "\033[104mWhat is your darkest secret?\e[0m" << std::endl;
		std::getline(std::cin, darkest_secret, '\n');
		newContact.SetSecret(darkest_secret);
	}
	if (!std::cin.eof())
	{
		std::cout << "\033[104mWhat is the phone number?\e[0m" << std::endl;
		std::getline(std::cin, number, '\n');
		newContact.SetNumber(number);
	}
	if (!std::cin.eof())
	{
		if (!CheckValidContact(&newContact))
			std::cout << "\033[92mContact saved successfully\e[0m" << std::endl;
		else
		{
			std::cout << "\033[31mContact is not valid\e[0m" << std::endl;
			return ;
		}
		this->Add(newContact);
	}
}

void	PrintArg(std::string str)
{
	std::cout << std::setfill (' ') << std::setw (10);
	if (str.length() <=10)
		std::cout << str;
	else
	{
		std::string name = str.substr(0,10);
		name[9] = '.';
		std::cout << name;
	}
}

void	PhoneBook::Search(void)
{
	int	index;

	PrintArg("Index");
	std::cout << "|";
	PrintArg("First Name");
	std::cout << "|";
	PrintArg("Last Name");
	std::cout << "|";
	PrintArg("Nickname");
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setfill (' ') << std::setw(10);
		std::cout << i << '|';
		PrintArg(this->contacts[i].GetFirstname());
		std::cout << '|';
		PrintArg(this->contacts[i].GetLastName());
		std::cout << '|';
		PrintArg(this->contacts[i].GetNickname());
		std::cout << std::endl;
	}
	std::cout << "\e[1;33mWrite the index of the number you want to search\e[0m" << std::endl;
	std::cin >> index;
	std::cin.clear();
	std::cin.ignore();
	if (!std::cin.eof())
	{
		this->DisplayContact(index);
	}
}

void	PhoneBook::DisplayContact(int index)
{
	if (index < 0 || index > 8)
	{
		std::cout << "\e[48;5;0mNumber not available. This phonebook can only store up to 8 contacts.\e[0m" << std::endl;
		return ;
	}
	if (this->contacts[index].GetFirstname().length() > 0)
	{
		std::cout << "\033[33mFirst name: \e[0m" << this->contacts[index].GetFirstname() << std::endl;
		std::cout << "\033[33mLast name: \e[0m" << this->contacts[index].GetLastName() << std::endl;
		std::cout << "\033[33mNickname: \e[0m" << this->contacts[index].GetNickname() << std::endl;
		std::cout << "\033[33mDarkest secret: \e[0m" << this->contacts[index].GetSecret() << std::endl;
		std::cout << "\033[33mNumber: \e[0m" << this->contacts[index].GetNumber() << std::endl;
		char a = 'a';
		std::cout << "Press ENTER to continue.";
		while(a != '\n')
			a = getchar();
	}
	else
		std::cout << "\e[38;5;196mNumber not available\e[0m" << std::endl;

}
