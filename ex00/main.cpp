/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:07:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:46:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie z;
	Zombie *a;

	a = newZombie("Miranda");
	a->announce();
	z.setName("Andre");
	z.announce();
	randomChump("Andre Miranda");
	delete a;
	return (0);
}
