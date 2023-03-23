/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:33:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/23 16:58:44 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal&);
		Animal &operator=(const Animal&);
		virtual ~Animal(void);

		//Member Funtions
		virtual void	makeSound(void) const;
		std::string getType(void) const;

	protected:
		std::string type;

	private:
};


#endif
