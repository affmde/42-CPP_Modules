/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:54:43 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:57:29 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"


class Ice : AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		Ice &operator=(const Ice&);
		~Ice(void);

	protected:


	private:
}


#endif
