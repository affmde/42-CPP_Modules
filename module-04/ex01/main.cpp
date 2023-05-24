/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:28:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 11:08:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	/*Test for constructor logs*/
	int	nbr_of_animals = 3;
	Animal **animals;
	animals = new Animal *[nbr_of_animals];

	for (int i = 0; i < nbr_of_animals; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < nbr_of_animals; i++)
		std::cout << animals[i]->getType() << std::endl;
	for (int i = 0; i < nbr_of_animals; i++)
		delete animals[i];
	delete animals;


	/*Test of assignment and checking if idea functions worked*/
	// Cat a;
	// a.addIdeaAt(0, "HAHAHAHAHAHHAHAA");
	// std::cout << "A: " << a.getIdeaAt(0) << std::endl;
	// Cat b = a;
	// std::cout << "B: " << b.getIdeaAt(0) << std::endl;
	// a.addIdeaAt(0, "Now i changed");
	// std::cout << "A: my idea is " << a.getIdeaAt(0) << std::endl;
	// std::cout << "B: My idea is " << b.getIdeaAt(0) << std::endl;

	/*Testing more assignmet operaions*/
	// Cat *a = new Cat();
	// a->addIdeaAt(85, "I want to miaw");
	// Cat b(*a);
	// Cat c = b;
	// std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	// std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	// std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;
	// (*a).addIdeaAt(85, "I am A");
	// b.addIdeaAt(85, "I am B");
	// std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	// std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	// std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;
	// c.addIdeaAt(85, "I am c");
	// std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	// std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	// std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;


	/*Testing handling of too much ideas or wrong index*/
	// Dog *a = new Dog();
	// for (int i = 0; i < 120; i++)
	// 	a->addIdeaAt(i, "I am a dog");
	// for (int i = 0; i < 100; i++)
	// 	std::cout << i + 1 << ": " << a->getIdeaAt(i) << std::endl;
	// delete a;

	return 0;
}
