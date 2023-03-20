/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:30:40 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 15:00:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Andre");
	ClapTrap b("Filipe");
	ScavTrap c;
	a.guardGate();
	std::string enemy = "d";
	b.attack(enemy);
	c = a;
	c.guardGate();
	a.attack(enemy);
	b.attack(enemy);
	a.beRepaired(50);
	b.beRepaired(12);
	return (0);
}
