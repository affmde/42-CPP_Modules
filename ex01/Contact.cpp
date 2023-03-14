/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:53:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 15:59:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::~Contact(void)
{

}

Contact::Contact(void)
{

}

void	Contact::SetFirstName(std::string name)
{
	first_name = name;
}

void	Contact::SetLastname(std::string name)
{
	last_name = name;
}

void	Contact::SetNickname(std::string name)
{
	nickname = name;
}

void	Contact::SetSecret(std::string str)
{
	secret = str;
}

void	Contact::SetNumber(std::string nbr)
{
	number = nbr;
}

std::string	Contact::GetFirstname(void)
{
	return (this->first_name);
}

std::string	Contact::GetLastName(void)
{
	return (this->last_name);
}

std::string	Contact::GetNickname(void)
{
	return (this->nickname);
}

std::string	Contact::GetSecret(void)
{
	return (this->secret);
}

std::string	Contact::GetNumber(void)
{
	return (this->number);
}
