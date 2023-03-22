/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:49:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/22 15:37:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;

	Ice a;
	Cure b;
	Ice c;
	std::cout << a.getType() << std::endl;
	Character andre("Andre");
	andre.equip(&a);
	andre.equip(&b);
	andre.use(0, andre);
	andre.use(1, andre);
	andre.equip(&c);
	andre.use(0, andre);
	andre.use(3, andre);
	return 0;
}
