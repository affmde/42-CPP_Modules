/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:09:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/13 18:13:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int n)
{
	this->number = n;
}

Data::Data(const Data &other)
{
	*this = other;
}

Data	&Data::operator=(const Data &other)
{
	this->number = other.number;
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