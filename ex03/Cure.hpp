/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:10:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:21:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"


class	Cure : AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		Cure &operator=(const Cure&);
		~Cure(void);

	protected:


	private:
		virtual AMateria *clone() const;
};


#endif
