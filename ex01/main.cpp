/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:21:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 15:58:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void	DisplayIntro(void)
{
	std::cout << "\e[1;33m*****************************************" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*      Welcome to your new PhoneBook    *" << std::endl;
	std::cout << "*      What do you want to do next?     *" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*                                       *" << std::endl;
	std::cout << "*****************************************\e[0m" << std::endl;
}

int	main(void)
{
	Contact newContact;
	PhoneBook phonebook;

	DisplayIntro();
	while (1)
		phonebook.Menu();
	return (0);
}
