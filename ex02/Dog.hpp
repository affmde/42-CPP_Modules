/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:39:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:44:30 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog&);
		Dog &operator=(const Dog&);
		~Dog(void);

		//Member functions
		virtual void	makeSound(void) const;
		std::string		getIdeaAt(int index);
		void			addIdeaAt(int index, std::string idea);

	protected:


	private:
		Brain	*brain;
};
