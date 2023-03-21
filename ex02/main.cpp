/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:28:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 17:47:14 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog a;
	a.makeSound();
	a.addIdeaAt(1, "I am a dog");
	std::cout << a.getIdeaAt(1) << std::endl;
	Dog b(a);
	std::cout << "i am B and " << b.getIdeaAt(1) << std::endl;
	return 0;
}
