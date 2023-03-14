/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:02 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:11:23 by andrferr         ###   ########.fr       */
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

void	Weapon::setType(std::string str)
{
	this->type = str;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}
