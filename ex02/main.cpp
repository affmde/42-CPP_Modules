/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:38:06 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/15 14:42:32 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> a(3);
	a[0] = 3;
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
	Array<char> b(3);
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] = 'a' + i;
		std::cout << b[i] << std::endl;
	}

	/*TEST OUT OF RANGE INDEX*/
	try{
		Array<float> c(2);
		int index = 10;
		c[index] = 5.3f;
		std::cout << c[index] << std::endl;
	} catch(Array<float>::BadIndexException &e){
		std::cout << e.what() << std::endl;
	}

	/*TEST COPY CONSTRUCTOR*/
	std::cout << "----------------COPY CONSTRUCTOR TEST--------------------------------------" << std::endl;
	try{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float>d(c);
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 7.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
	} catch(Array<float>::BadIndexException &e){
		std::cout << e.what() << std::endl;
	}

	/*TEST COPY ASSIGNMENT OPERATOR*/
	std::cout << "----------------COPY ASSIGNMENT OPERATOR TEST-------------------------------" << std::endl;
	try{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float>d = c;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 7.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
	} catch(Array<float>::BadIndexException &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------COPY ASSIGNMENT OPERATOR TEST AFTER BEING INITIALIZED FIRST----------" << std::endl;
	try{
		int index = 0;
		Array<float> c(2);
		c[index] = 5.3f;
		Array<float>d(5);
		d[index] = 9.4f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		std::cout << "elements in c: " << c.size() << std::endl;
		std::cout << "elements in d: " << d.size() << std::endl;
		d = c;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		c[index] = 8.3f;
		std::cout << "c: " << c[index] << std::endl;
		std::cout << "d: " << d[index] << std::endl;
		std::cout << "elements in c: " << c.size() << std::endl;
		std::cout << "elements in d: " << d.size() << std::endl;
	} catch(Array<float>::BadIndexException &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}