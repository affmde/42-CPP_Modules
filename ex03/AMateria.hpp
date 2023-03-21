/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:50:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:06:05 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class	AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria&);
		AMateria &operator=(const AMateria&);
		~AMateria(void);
		std::string const getType(void) const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string type;

	private:

};


#endif;
