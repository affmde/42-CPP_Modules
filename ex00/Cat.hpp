/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:59 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 14:27:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat&);
		Cat &operator=(const Cat&);
		~Cat(void);

		//member functions
		virtual void	makeSound(void) const;

	protected:


	private:
};



#endif
