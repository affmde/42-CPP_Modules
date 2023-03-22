/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:01:07 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 17:16:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		MateriaSource &operator=(const MateriaSource&);
		~MateriaSource(void);

		//Member functions
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	protected:


	private:
		AMateria	*materias[4];
};


#endif
