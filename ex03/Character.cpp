/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:27:20 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 15:47:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "Unknown";
	this->slots = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character string cosntructor called" << std::endl;
	this->name = name;
	this->slots = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->slots = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->slots[i] = other.slots[i];
	this->name = other.name;
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
	delete[] slots;
}

//Member Functions

std::string const &Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	std::cout << "type to equip is : " << m->getType() << std::endl;
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
	if (idx < 0 || idx > 3)
		return ;
	if (!this->slots[idx])
		return ;
	this->slots[idx]->use(target);
	//delete this->slots[idx];
	this->slots[idx] = NULL;
}
