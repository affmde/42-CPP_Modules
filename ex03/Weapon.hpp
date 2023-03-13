/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:07:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 13:56:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

using namespace std;

class Weapon
{
	public:
	Weapon(string str);
	~Weapon(void);
	string	getType(void) const;
	void	setType(string str);

	private:
	string	type;

};

#endif
