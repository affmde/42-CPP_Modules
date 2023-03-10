/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:07:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 16:18:26 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z;
	Zombie *a;

	a = newZombie("Miranda");
	a->Announce();
	z.SetName("Andre");
	z.Announce();
	randomChump("Andre Miranda");
	delete a;
	return (0);
}
