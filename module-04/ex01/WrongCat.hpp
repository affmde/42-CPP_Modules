/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:44:14 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 14:51:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat&);
		WrongCat &operator=(const WrongCat&);
		~WrongCat();

		//Member functions
		virtual void	makeSound(void) const;
		
	protected:


	private:



};

