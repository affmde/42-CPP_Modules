/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:22:59 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 08:50:35 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap &operator=(const DiamondTrap &);
		~DiamondTrap(void);

		//virtual void attack(std::string &target);
		void	whoAmI(void);

	private:
		std::string name;
};
