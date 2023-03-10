/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:24:01 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 16:41:50 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].SetName(name);
	return (horde);
}
