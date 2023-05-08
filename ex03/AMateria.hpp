/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:50:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 13:47:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
//#include "ICharacter.hpp"

class ICharacter;

class	AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria&);
		virtual ~AMateria(void);

		//Member functions
		std::string const	getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
		AMateria			*next;

	protected:
		std::string	type;
	private:

};


#endif
