/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:54:43 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 11:07:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		Ice &operator=(const Ice&);
		~Ice(void);

		//Member Functions
		virtual void use(ICharacter &target);

	protected:


	private:
		virtual AMateria *clone() const;
};


#endif
