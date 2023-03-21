/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:28:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:29:22 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	// int	nbr_of_animals = 2;
	// Animal **animals;
	// animals = new Animal *[nbr_of_animals];

	// for (int i = 0; i < nbr_of_animals; i++)
	// {
	// 	if (i % 2 == 0)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }
	// for (int i = 0; i < nbr_of_animals; i++)
	// 	delete animals[i];
	// delete animals;

	// Dog a;
	// a.addIdeaAt(0, "HAHAHAHAHAHHAHAA");
	// std::cout << "A: " << a.getIdeaAt(0) << std::endl;
	// Dog b = a;
	// std::cout << "B: " << b.getIdeaAt(0) << std::endl;
	// b.addIdeaAt(0, "Now i changed");
	// std::cout << "A: my idea is " << a.getIdeaAt(0) << std::endl;
	// std::cout << "B: My idea is " << b.getIdeaAt(0) << std::endl;


	Cat *a = new Cat();
	a->addIdeaAt(85, "I want to miaw");
	Cat b(*a);
	Cat c = b;
	std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;
	(*a).addIdeaAt(85, "I am A");
	b.addIdeaAt(85, "I am B");
	std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;
	c.addIdeaAt(85, "I am c");
	std::cout << "A: My idea is " << (*a).getIdeaAt(85) << std::endl;
	std::cout << "B: My idea is " << b.getIdeaAt(85) << std::endl;
	std::cout << "C: My idea is " << c.getIdeaAt(85) << std::endl;
	return 0;
}
