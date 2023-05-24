/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:05:39 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:45:52 by andrferr         ###   ########.fr       */
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

		//Member Functions
		void		announce(void);
		void		setName(std::string str);
		std::string	getName(void);

	private:
		std::string	name;
};

#endif
