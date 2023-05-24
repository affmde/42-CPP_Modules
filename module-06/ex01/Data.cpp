/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:09:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 11:26:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int n, std::string s)
{
	this->number = n;
	this->str = s;
}

Data::Data(const Data &other)
{
	*this = other;
}

Data	&Data::operator=(const Data &other)
{
	this->number = other.number;
	this->str = other.str;
	
	return (*this);
}

Data::~Data(void){}


//Member Functions

void	Data::setNumber(int n)
{
	this->number = n;
}

int		Data::getNumber(void)
{
	return (this->number);
}

void	Data::setString(std::string s)
{
	this->str = s;
}

std::string	Data::getString(void)
{
	return (this->str);
}