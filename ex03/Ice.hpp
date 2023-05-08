/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:54:43 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 13:48:48 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		Ice &operator=(const Ice&);
		~Ice(void);

		//Member Functions
		virtual void		use(ICharacter &target);
		virtual AMateria	*clone(void) const;

	protected:


	private:

};


#endif
