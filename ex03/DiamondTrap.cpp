/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:32:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 09:18:50 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = ScavTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->name = name;
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	ScavTrap::attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	this->name = other.name;
	this->hit_points = other.FragTrap::hit_points;
	this->energy_points = other.ScavTrap::energy_points;
	this->attack_damage = other.ScavTrap::attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


//Member functions

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << " and my Clap name is " << this->FragTrap::name << std::endl;
}

void	DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}
