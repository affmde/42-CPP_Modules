/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:33:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:40:44 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal&);
		AAnimal &operator=(const AAnimal&);
		virtual ~AAnimal(void);

		//Member Funtions
		virtual void	makeSound(void) const = 0;
		std::string getType(void) const;

	protected:
		std::string type;

	private:
};


#endif
