/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:25:14 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 11:38:30 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	std::cout << "------TEST MAIN FROM SUBJECT------" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "Values as std::list<int>" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(mstack);
	}

	std::cout << "------TEST 2------" << std::endl;
	{
		MutantStack<int> a;
		a.push(20);
		MutantStack<int> b = a;
		a.pop();
		a.push(30);
		std::cout << "a bigin: " << *a.begin() << std::endl;
		std::cout << "b begin: " << *b.begin() << std::endl;
		MutantStack<int> c(b);
		std::cout << "c begin: " << *c.begin() << std::endl;
		std::cout << "C size before pop(): " << c.size() << std::endl;
		c.pop();
		std::cout << "C size after pop(): " << c.size() << std::endl;
	}

	std::cout << "------TEST 3: USING ITERATOR TO LOOP THROUGHT STACK TO ADD AND PRINT VALUES------" << std::endl;
	{
		int amount = 10;
		MutantStack<int> *a = new MutantStack<int>();
		for(int i = 0; i < amount; i++)
			a->push(i);
		MutantStack<int>b;
		MutantStack<int>::iterator	it = a->begin();
		MutantStack<int>::iterator	end = a->end();
		for(;it != end;++it)
			b.push(*it);
		it = b.begin();
		end = b.end();
		for(;it != end;++it)
			std::cout << *it << std::endl;
		delete a;
	}
	return (0);
}
