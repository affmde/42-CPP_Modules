/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:52:06 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/06 11:05:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>

int	main(void)
{
	Span a(5);
	int number;
	try{
		for(int i = 0; i < 10; i++)
		{
			srand(time(NULL) * i);
			number = -50 + rand() % 100;
			a.addNumber(number);
			std::cout << number << " added to span" << std::endl;
		}
	}catch (Span::SpanFullException &e){
		std::cout << e.what() << std::endl;
	}
	try{
		unsigned int len = a.longestSpan();
		std::cout << "longest span: " << len << std::endl;
	} catch(Span::NotEnoughElementsExceptions &e){
		std::cout << e.what() << std::endl;
	}
	try{
		unsigned int shortest = a.shortestSpan();
		std::cout << "shortest span: " << shortest << std::endl;
	} catch(Span::NotEnoughElementsExceptions &e){
		std::cout << e.what() << std::endl;
	}

	/*TEST MULTIPLE ADD NUMBER*/
	std::cout << "--------Multiple adds test----------" << std::endl;
	try{
		Span a(10);
		a.addNumber(55);
		a.addNumber(70);
		std::vector<int>v(100);
		int c = 0;
		for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++, c++)
		{
			srand(time(NULL) * c);
			*it = rand() % 500000;
		}
		a.addNumber(v.begin(), v.end());
		unsigned int shortest = a.shortestSpan();
		std::cout << "shortest span: " << shortest << std::endl;
		unsigned int len = a.longestSpan();
		std::cout << "longest span: " << len << std::endl;
	} catch(Span::NotEnoughElementsExceptions &e){
		std::cout << e.what() << std::endl;
	} catch(Span::SpanFullException &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
