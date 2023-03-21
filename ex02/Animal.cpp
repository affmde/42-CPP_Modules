/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:35:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:44:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "Animal copy constructor call" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Animal copy assignement operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}


std::string AAnimal::getType(void) const
{
	return (this->type);
}
