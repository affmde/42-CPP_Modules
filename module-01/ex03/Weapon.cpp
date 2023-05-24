/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:02 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 16:22:48 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::~Weapon()
{

}

//Member Functions

void	Weapon::setType(std::string str)
{
	this->type = str;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}
