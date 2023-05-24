/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:32:57 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 13:01:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


//Member functions

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm a a wrongAnimal and my sound is awfull! MEEEEEEHHHHH!!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
