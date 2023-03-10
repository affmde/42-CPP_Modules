/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:34:45 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 14:59:05 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string.h>
#include <iomanip>

using namespace std;

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
	string input;

	while (1)
	{
		if (cin.eof())
			exit (0);
		cout << "Write \"ADD\" to add a new contact." << endl;
		cout << "Write \"SEARCH\" to search for a contact" << endl;
		cout << "Write \"EXIT\" to exit the PhoneBook." << endl;
		getline(cin, input, '\n');
		if (input.compare("ADD") == 0)
			this->NewContactMenu();
		else if (input.compare("SEARCH") == 0)
			this->Search();
		else if (input.compare("EXIT") == 0 || cin.eof())
			exit(0);
		else
			cout << "Invalid input." << endl;
	}

}

int	IsDigit(string number)
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
	string	first_name;
	string	last_name;
	string	nickname;
	string	darkest_secret;
	string	number;

	if (!cin.eof())
	{
		cout << "\033[104mWhat is your first name?\e[0m" << endl;
		getline(cin, first_name, '\n');
		newContact.SetFirstName(first_name);
	}
	if (!cin.eof())
	{
		cout << "\033[104mWhat is your last name?\e[0m" << endl;
		getline(cin, last_name, '\n');
		newContact.SetLastname(last_name);
	}
	if (!cin.eof())
	{
		cout << "\033[104mWhat is your nickname?\e[0m" << endl;
		getline(cin, nickname, '\n');
		newContact.SetNickname(nickname);
	}
	if (!cin.eof())
	{
		cout << "\033[104mWhat is your darkest secret?\e[0m" << endl;
		getline(cin, darkest_secret, '\n');
		newContact.SetSecret(darkest_secret);
	}
	if (!cin.eof())
	{
		cout << "\033[104mWhat is the phone number?\e[0m" << endl;
		getline(cin, number, '\n');
		newContact.SetNumber(number);
	}
	if (!cin.eof())
	{
		if (!CheckValidContact(&newContact))
			cout << "\033[92mContact saved successfully\e[0m" << endl;
		else
		{
			cout << "\033[31mContact is not valid\e[0m" << endl;
			return ;
		}
		this->Add(newContact);
	}
}

void	PrintArg(string str)
{
	cout << setfill (' ') << setw (10);
	if (str.length() <=10)
		cout << str;
	else
	{
		string name = str.substr(0,10);
		name[9] = '.';
		cout << name;
	}
}

void	PhoneBook::Search(void)
{
	int	index;

	PrintArg("Index");
	cout << "|";
	PrintArg("First Name");
	cout << "|";
	PrintArg("Last Name");
	cout << "|";
	PrintArg("Nickname");
	cout << endl;

	for (int i = 0; i < 8; i++)
	{
		cout << setfill (' ') << setw(10);
		cout << i << '|';
		PrintArg(this->contacts[i].GetFirstname());
		cout << '|';
		PrintArg(this->contacts[i].GetLastName());
		cout << '|';
		PrintArg(this->contacts[i].GetNickname());
		cout << endl;
	}
	cout << "\e[1;33mWrite the index of the number you want to search\e[0m" << endl;
	cin >> index;
	cin.clear();
	cin.ignore();
	if (!cin.eof())
	{
		this->DisplayContact(index);
	}
}

void	PhoneBook::DisplayContact(int index)
{
	if (index < 0 || index > 8)
	{
		cout << "\e[48;5;0mNumber not available. This phonebook can only store up to 8 contacts.\e[0m" << endl;
		return ;
	}
	if (this->contacts[index].GetFirstname().length() > 0)
	{
		cout << "\033[33mFirst name: \e[0m" << this->contacts[index].GetFirstname() << endl;
		cout << "\033[33mLast name: \e[0m" << this->contacts[index].GetLastName() << endl;
		cout << "\033[33mNickname: \e[0m" << this->contacts[index].GetNickname() << endl;
		cout << "\033[33mDarkest secret: \e[0m" << this->contacts[index].GetSecret() << endl;
		cout << "\033[33mNumber: \e[0m" << this->contacts[index].GetNumber() << endl;
		char a = 'a';
		cout << "Press ENTER to continue.";
		while(a != '\n')
			a = getchar();
	}
	else
		cout << "\e[38;5;196mNumber not available\e[0m" << endl;

}
