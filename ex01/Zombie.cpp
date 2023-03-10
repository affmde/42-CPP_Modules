/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:22:56 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 16:26:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	cout << name << " is leaving. Goodbye!" << endl;
}

void	Zombie::SetName(string str)
{
	name = str;
}

string	Zombie::GetName(void)
{
	return (name);
}

void	Zombie::Announce(void)
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}
