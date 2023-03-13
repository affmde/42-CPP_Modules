/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:02 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 15:58:27 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string str)
{
	this->type = str;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(string str)
{
	this->type = str;
}

string	Weapon::getType(void) const
{
	return (this->type);
}
