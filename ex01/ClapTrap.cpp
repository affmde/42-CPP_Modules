/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:14:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 15:10:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "String constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}


//Member functions

void	ClapTrap::attack(std::string &target)
{
	if (energy_points > 0 && hit_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hit_points << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 0)
	{
		this->energy_points--;
		this->hit_points += amount;
		std::cout << "ClapTrap " << this->name << " is reparing itself and got more " << amount << " hit points." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	this->hit_points -= damage;
}
