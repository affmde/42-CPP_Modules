/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:28:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 11:13:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	/*Basic Test*/
	Dog a;
	a.makeSound();
	a.addIdeaAt(1, "I am a dog");
	std::cout << a.getIdeaAt(1) << std::endl;
	Dog b(a);
	std::cout << "i am B and " << b.getIdeaAt(1) << std::endl;

	/*Not possible to Instantiate Animal. Should give error*/
	// AAnimal a;
	// a.getType();

	/*Test assignemnt operator and copy constructor*/
	// Dog a;
	// a.addIdeaAt(0, "I am a dog");
	// Dog b = a;
	// Dog c(b);
	// std::cout << "Dog B: " << b.getIdeaAt(0) << std::endl;
	// a.addIdeaAt(0, "I am still a dog");
	// std::cout << "Dog A: " << a.getIdeaAt(0) << std::endl;
	// std::cout << "Dog B: " << b.getIdeaAt(0) << std::endl;
	// std::cout << "Dog C: " << c.getIdeaAt(0) << std::endl;
	return 0;
}
