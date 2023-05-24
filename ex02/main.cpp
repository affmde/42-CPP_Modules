/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:33:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/18 08:48:13 by andrferr         ###   ########.fr       */
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
	int	random = rand() % 3;
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
	if (!p)
		return ;
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &other)
{
	try{(void)dynamic_cast<A&>(other);std::cout << "A" << std::endl;}catch(std::exception &e){}
	try{(void)dynamic_cast<B&>(other);std::cout << "B" << std::endl;}catch(std::exception &e){}
	try{(void)dynamic_cast<C&>(other);std::cout << "C" << std::endl;}catch(std::exception &e){}
}

int	main(void)
{
	/*Test 1*/
	{
		Base *a = generate();
		identify(a);
		identify(*a);
		delete a;
	}
	/*Testing assignment*/
	Base *a = generate();
	Base &b = *a;
	identify(a);
	identify(b);
	delete a;
	return (0);
}
