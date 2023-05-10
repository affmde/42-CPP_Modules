/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:27:20 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 13:02:54 by andrferr         ###   ########.fr       */
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
	std::cout << "Character string constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->slots[i] = other.slots[i];
	this->name = other.name;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operatot called" << std::endl;
	this->name = other.name;
	for(int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete this->slots[i];
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	this->garbage = other.garbage;
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
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
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			std::cout << m->getType() << " equiped successfuly!" << std::endl;
			return ;
		}
	}
	std::cout << "Unable to equip. Your inventory is full. Materia is dropped on the floor." << std::endl;
	this->garbage.pushBack(m);
}

void	Character::unequip(int idx)
{
	if (this->slots[idx] != NULL)
	{
		std::cout << this->name << " unequiped a " << this->slots[idx]->getType() << std::endl;
		this->garbage.pushBack(this->slots[idx]);
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
	{
		std::cout << "That slots is empty" << std::endl;
		return ;
	}
	this->slots[idx]->use(target);
	delete this->slots[idx];
	this->slots[idx] = NULL;
}
