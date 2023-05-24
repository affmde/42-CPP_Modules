/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:07:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:49:22 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string str);
		~Weapon(void);

		//Member Functions
		std::string	getType(void) const;
		void		setType(std::string str);

	private:
		std::string	type;

};

#endif
