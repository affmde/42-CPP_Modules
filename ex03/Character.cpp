/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:27:20 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/23 10:54:45 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "Unknown";
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character string cosntructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->slots[i];
		this->slots[i] = other.slots[i];
	}
	this->name = other.name;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operatot called" << std::endl;
	this->name = other.name;
	for(int i = 0; i < 4; i++)
	{
		delete this->slots[i];
		*this->slots[i] = *other.slots[i];
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Charatcer destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
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
			std::cout << m->getType() << " equiped successfuly!" << std::endl;
			return ;
		}
	}
	std::cout << "Unable to equip. Your inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->slots[idx] != NULL)
	{
		//!!!!!! Still need to implement here a place to where to throw the dropped AMateria!!!!!!!!!!
		this->slots[idx] = NULL;
		return ;
	}
	std::cout << "You can not unequip this materia" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->slots[idx])
		return ;
	this->slots[idx]->use(target);
	delete this->slots[idx];
	this->slots[idx] = NULL;
}
