/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:21:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/09 17:58:14 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

using namespace std;

void	DisplayIntro(void)
{
	cout << "\e[1;33m*****************************************" << endl;
	cout << "*                                       *" << endl;
	cout << "*                                       *" << endl;
	cout << "*      Welcome to your new PhoneBook    *" << endl;
	cout << "*      What do you want to do next?     *" << endl;
	cout << "*                                       *" << endl;
	cout << "*                                       *" << endl;
	cout << "*****************************************\e[0m" << endl;
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
