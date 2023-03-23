/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:30:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/23 17:05:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		WrongAnimal &operator=(const WrongAnimal&);
		virtual ~WrongAnimal(void);

		//Member functions
		void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string type;

	private:

};


#endif
