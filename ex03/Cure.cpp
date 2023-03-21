/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:13:34 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:21:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &other)
{
	std::cout << "Cure copy constructr called" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignement constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}


//Member Functions

AMateria	*Cure::clone(void) const
{
	Cure *cure = new Cure();
	return (cure);
}
