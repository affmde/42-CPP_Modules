/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:22:56 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:47:01 by andrferr         ###   ########.fr       */
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
