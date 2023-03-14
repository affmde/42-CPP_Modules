/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:11:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string n);
	~HumanB(void);
	void	setWeapon(Weapon &w);
	void	attack(void);


	private:
	std::string	name;
	Weapon	*weapon;
};


#endif
