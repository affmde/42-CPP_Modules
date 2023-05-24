/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:06:10 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:46:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << name << " is leaving. Goodbye!" << std::endl;
}


//Member Functions

void	Zombie::setName(std::string str)
{
	name = str;
}

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
