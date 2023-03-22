/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:27:20 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 11:41:15 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "Unknown";
}

Character::Character(std::string name)
{
	std::cout << "Character string cosntructor called" << std::endl;
	this->name = name;
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operatot called" << std::endl;
	this->name = other.name;
	for(int i = 0; i < 4; i++)
		*this->slots[i] = *other.slots[i];
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Charatcer destructor called" << std::endl;
}

//Member Functions

std::string const &Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (this->slots[idx] != NULL)
	{
		//!!!!!! Still need to implement here a place to where to throw the dropped AMateria!!!!!!!!!!
		this->slots[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	this->slots[idx]->use(target);
	delete this->slots[idx];
	this->slots[idx] = NULL;
}
