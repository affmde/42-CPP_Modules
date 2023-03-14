/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:49:03 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:10:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory adress of str:         " <<(void*)&str << std::endl;
	std::cout << "memory adress of stringPTR:   " << stringPTR << std::endl;
	std::cout << "memory adress of &stringREF:  " << &stringREF << std::endl;

	std::cout << "value of str:                 " << str << std::endl;
	std::cout << "value of stringPTR:           " << *stringPTR << std::endl;
	std::cout << "value of &stringREF:          " << stringREF << std::endl;
	return (0);
}
