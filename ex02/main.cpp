/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:33:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 15:56:56 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <time.h>

Base	*generate(void)
{
	Base *base;
	
	srand(time(NULL));
	int	random = rand() %3;
	switch (random)
	{
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
	}
	return (base);
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
		if (b)
		std::cout << "B" << std::endl;
	C *c= dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void	identify(Base &other)
{
	try{dynamic_cast<A&>(other);std::cout << "A" << std::endl;}catch(std::exception &e){}
	try{dynamic_cast<B&>(other);std::cout << "B" << std::endl;}catch(std::exception &e){}
	try{dynamic_cast<C&>(other);std::cout << "C" << std::endl;}catch(std::exception &e){}
}

int	main(void)
{
	Base *a = generate();
	Base &b = *a;
	identify(a);
	identify(b);
	return (0);
}