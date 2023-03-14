/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:05:39 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:06:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
	Zombie(void);
	~Zombie(void);
	void	Announce(void);
	void	SetName(std::string str);
	std::string	GetName(void);
	private:
	std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
