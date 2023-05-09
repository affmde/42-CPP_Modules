/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:11:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 11:11:53 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

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
		std::string		getType(void) const;

	protected:
		std::string	type;

	private:
};


#endif
