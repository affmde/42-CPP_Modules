/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:01:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:23:00 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
	for (int i = 0; i < 100; i++)
		this->brain->addIdeaAt(i, other.brain->getIdeaAt(i));
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

//Member funtions

void	Dog::makeSound(void) const
{
	std::cout << "AO AO AO!!" << std::endl;
}

std::string	Dog::getIdeaAt(int index)
{
	return (this->brain->getIdeaAt(index));
}

void	Dog::addIdeaAt(int index, std::string idea)
{
	this->brain->addIdeaAt(index, idea);
}
