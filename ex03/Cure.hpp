/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:10:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 14:12:05 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		Cure &operator=(const Cure&);
		~Cure(void);

		//Member Functions
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
	protected:


	private:
};


#endif
