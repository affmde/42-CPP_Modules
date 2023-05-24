/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:17:49 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/21 17:07:57 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Andre");

	std::string enemy = "Asshole";
	a.whoAmI();
	a.attack(enemy);
	a.takeDamage(20);

	return (0);
}
