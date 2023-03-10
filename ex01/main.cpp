/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:22:05 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 16:46:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		amount = 5;

	horde = zombieHorde(amount, "Andre");
	for(int i = 0; i < amount; i++)
		horde[i].Announce();
	delete[] horde;
	return (0);
}
