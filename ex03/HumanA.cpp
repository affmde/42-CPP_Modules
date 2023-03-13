/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:06 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 15:48:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(string name, Weapon &w) : weapon(w)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	//delete weapon;
}

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}

