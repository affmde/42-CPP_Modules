/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Garbage.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:09:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 13:48:37 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_HPP
# define GARBAGE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Garbage
{
	public:
		Garbage(void);
		Garbage(const Garbage&);
		Garbage	&operator=(const Garbage&);
		~Garbage(void);

		//Member Functions
		void	pushBack(AMateria *materia);
		void	printList();
		void	deleteList();

	protected:

	private:
		AMateria	*materia_list;
};



#endif
