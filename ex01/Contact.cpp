/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:53:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 14:53:01 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

using namespace std;

Contact::~Contact(void)
{
	
}

Contact::Contact(void)
{

}

void	Contact::SetFirstName(string name)
{
	first_name = name;
}

void	Contact::SetLastname(string name)
{
	last_name = name;
}

void	Contact::SetNickname(string name)
{
	nickname = name;
}

void	Contact::SetSecret(string str)
{
	secret = str;
}

void	Contact::SetNumber(string nbr)
{
	number = nbr;
}

string	Contact::GetFirstname(void)
{
	return (this->first_name);
}

string	Contact::GetLastName(void)
{
	return (this->last_name);
}

string	Contact::GetNickname(void)
{
	return (this->nickname);
}

string	Contact::GetSecret(void)
{
	return (this->secret);
}

string	Contact::GetNumber(void)
{
	return (this->number);
}
