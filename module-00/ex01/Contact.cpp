/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:53:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/24 16:07:57 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){}

Contact::~Contact(void){}

//Member Functions

void	Contact::setFirstName(std::string name)
{
	this->first_name = name;
}

void	Contact::setLastname(std::string name)
{
	this->last_name = name;
}

void	Contact::setNickname(std::string name)
{
	this->nickname = name;
}

void	Contact::setSecret(std::string str)
{
	this->secret = str;
}

void	Contact::setNumber(std::string nbr)
{
	this->number = nbr;
}

std::string	Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string	Contact::getLastName(void)
{
	return (this->last_name);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getSecret(void)
{
	return (this->secret);
}

std::string	Contact::getNumber(void)
{
	return (this->number);
}
