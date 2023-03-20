/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:19:59 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 14:55:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &::ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


//member functions

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now on guard mode" << std::endl;
}

void	ScavTrap::attack(std::string &target)
{
	if (energy_points > 0 && hit_points > 0)
	{
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->hit_points << " points of damage!" << std::endl;
	}
}
