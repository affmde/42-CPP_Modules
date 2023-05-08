/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:16:48 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 11:16:46 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap &operator=(const ClapTrap&);
		~ClapTrap(void);

		virtual void	attack(std::string &target);
		void			takeDamage(unsigned int damage);
		void			beRepaired(unsigned int	amount);

	protected:
		std::string		name;
		unsigned int	hit_points;
		unsigned int	energy_points;
		unsigned int	attack_damage;

	private:

};


#endif
