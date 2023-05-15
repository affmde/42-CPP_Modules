/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:50:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/15 15:50:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int> a = {1,2,3,4,5,6,7,8,9,10};
	try {
		std::vector<int>::iterator b = easyfind(a, 5);
		std::cout << *b << std::endl;
	}catch (NotFoundException &e){
		std::cout << e.what() << std::endl;
	}

	{std::list<int> a = {1,2,3,4,5,6,7,8,9,10};
	try {
		std::list<int>::iterator b = easyfind(a, 8);
		std::cout << *b << std::endl;
	}catch (NotFoundException &e){
		std::cout << e.what() << std::endl;
	}}
	return (0);
}