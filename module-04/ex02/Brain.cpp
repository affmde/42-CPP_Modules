/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:09:10 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/23 16:51:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

//Member functions

void	Brain::addIdeaAt(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "I have no space in my memory for more ideas" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}

std::string	Brain::getIdeaAt(int index)
{
	return (this->ideas[index]);
}

