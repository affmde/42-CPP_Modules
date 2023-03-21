/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:57:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:09:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &other)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignement operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}
