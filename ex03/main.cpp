/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:49:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 14:00:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Garbage.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	/*Testing copy assignment of materias*/
	// MateriaSource *src = new MateriaSource();
	// src->learnMateria(new Cure());
	// AMateria *tmp;
	// AMateria *a = src->createMateria("cure");
	// std::cout << a->getType() << std::endl;
	// tmp = a;
	// Ice *aa = new Ice();
	// Ice bb(*aa);
	// std::cout << "tmp type: " << tmp->getType() << std::endl;
	// std::cout << "copy_tmp type: " << tmp->getType() << std::endl;
	// std::cout << bb.getType() << std::endl;
	// delete src;
	// delete a;
	// delete aa;


	/*Testing assignment of new Character*/
	// Character Andre("Andre");
	// MateriaSource	*src = new MateriaSource();
	// src->learnMateria(new Ice());
	// AMateria *m1 = src->createMateria("ice");
	// Andre.equip(m1);
	// Character b("Filipe");
	// b = Andre;
	// b.use(0, Andre);
	// Character c(b);
	// delete src;



	/*Testing Multiple equips*/
	// ICharacter *andre = new Character("Andre");
	// MateriaSource *src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// AMateria *tmp;

	// for (int i = 0; i < 10; i++)
	// {
	// 	if (i % 2 == 0)
	// 	{
	// 		tmp = src->createMateria("ice");
	// 		andre->equip(tmp);
	// 	}
	// 	else
	// 	{
	// 		tmp = src->createMateria("cure");
	// 		andre->equip(tmp);
	// 	}
	// }
	// delete andre;
	// delete src;


	/*Testing the unequiping and lack of leaks*/
	// MateriaSource *src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// AMateria	*tmp;
	// Character	andre("Andre");
	// for (int i = 0; i < 10; i++)
	// {
	// 	if (i % 2 == 0)
	// 	{
	// 		tmp = src->createMateria("ice");
	// 		andre.equip(tmp);
	// 	}
	// 	else
	// 	{
	// 		tmp = src->createMateria("cure");
	// 		andre.equip(tmp);
	// 	}
	// }
	// andre.unequip(2);
	// andre.unequip(1);

	// delete src;



	return 0;
}
