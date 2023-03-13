/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:08:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 15:48:12 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanA
{
	public:
	HumanA(string name, Weapon &w);
	~HumanA(void);
	void	attack(void);

	private:
	string name;
	Weapon &weapon;
};

#endif
