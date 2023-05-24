/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:07:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:24:55 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	this->type = other.type;
	for (int i = 0; i < 100; i++)
		this->brain->addIdeaAt(i, other.brain->getIdeaAt(i));
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

//Member functions

void	Cat::makeSound(void) const
{
	std::cout << "miaw miaw" << std::endl;
}

std::string	Cat::getIdeaAt(int index)
{
	return (this->brain->getIdeaAt(index));
}

void	Cat::addIdeaAt(int index, std::string idea)
{
	this->brain->addIdeaAt(index, idea);
}
