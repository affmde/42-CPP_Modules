/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:50:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/24 10:19:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	try {
		std::vector<int>::iterator b = easyfind(a, 5);
		std::cout << *b << std::endl;
	}catch (NotFoundException &e){
		std::cout << e.what() << std::endl;
	}

	{std::list<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	try {
		std::list<int>::iterator b = easyfind(a, 8);
		std::cout << *b << std::endl;
	}catch (NotFoundException &e){
		std::cout << e.what() << std::endl;
	}}
	return (0);
}
