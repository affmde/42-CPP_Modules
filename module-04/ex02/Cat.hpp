/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:59 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 11:12:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class	Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(const Cat&);
		Cat &operator=(const Cat&);
		~Cat(void);

		//member functions
		virtual void	makeSound(void) const;
		std::string		getIdeaAt(int index);
		void			addIdeaAt(int index, std::string idea);

	protected:


	private:
		Brain	*brain;
};



#endif
