/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:28:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 15:05:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();}

	/*************************************************************/
	std::cout << "-------------------------------------------------------" << std::endl;
	/*************************************************************/
	{const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the WrongAnimal sound!
	meta->makeSound();}

	/*************************************************************/
	std::cout << "-------------------------------------------------------" << std::endl;
	/*************************************************************/

	{
		const Cat a;
		const WrongCat b;

		std::cout << "I am a " << a.getType() << " and when I scream I do: ";
		a.makeSound();
		std::cout << "I am a " << b.getType() << " and when I scream I do: ";
		b.makeSound();
	}
return 0;
}
