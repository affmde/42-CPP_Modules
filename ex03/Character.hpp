/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:25:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:32:29 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Character
{
	public:
		Character(void);
		Character(const Character&);
		Character &operator=(const Character&);
		~Character(void);

	protected:


	private:
		AMateria *slots[4];

};
