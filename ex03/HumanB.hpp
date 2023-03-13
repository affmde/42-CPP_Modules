/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:09:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 15:57:18 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanB
{
	public:
	HumanB(string n);
	~HumanB(void);
	void	setWeapon(Weapon &w);
	void	attack(void);


	private:
	string	name;
	Weapon	*weapon;
};


#endif
