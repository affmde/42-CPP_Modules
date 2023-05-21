/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:09:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/21 15:51:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe(int argc, char **argv)
{
	int	i = 1;
	while (i < argc)
	{
		this->_arg += " ";
		this->_arg += argv[i];
		i++;
	}
	std::cout << this->_arg << std::endl;
}
PmergeMe::PmergeMe(const PmergeMe &other){*this = other;}
PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	this->_vector = other._vector;
	this->_list = other._list;
	this->_arg = other._arg;
	return (*this);
}
PmergeMe::~PmergeMe(void){}

//Exceptions


//Member Functions

