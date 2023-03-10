/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:23:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 16:41:16 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

using namespace std;

class Zombie
{
	public:
	Zombie(void);
	~Zombie(void);
	void	Announce(void);
	void	SetName(string str);
	string	GetName(void);
	private:
	string name;
};

Zombie	*zombieHorde(int N, string name);

#endif
