/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:30:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/08 13:46:52 by andrferr         ###   ########.fr       */
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
		~WrongAnimal(void);

		//Member functions
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	type;

	private:

};


#endif
