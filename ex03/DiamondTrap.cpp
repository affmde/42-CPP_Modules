/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:32:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 16:12:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	//this->name = ClapTrap::name;
	this->FragTrap::hit_points = FragTrap::hit_points;
	this->ScavTrap::energy_points = ScavTrap::energy_points;
	this->FragTrap::attack_damage = ScavTrap::attack_damage;
	//this->ScavTrap::attack = ScavTrap::attack;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name")
{
	this->name = name;
	this->FragTrap::hit_points = FragTrap::hit_points;
	this->ScavTrap::energy_points = ScavTrap::energy_points;
	this->FragTrap::attack_damage = ScavTrap::attack_damage;
	std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	this->name = other.name;
	this->FragTrap::hit_points = other.FragTrap::hit_points;
	this->ScavTrap::energy_points = other.ScavTrap::energy_points;
	this->FragTrap::attack_damage = other.ScavTrap::attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


//member functions

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << " and my Clap name is " << this->FragTrap::name << std::endl;
}
