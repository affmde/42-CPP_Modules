/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:09:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/22 16:40:13 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

PmergeMe::PmergeMe(int argc, char **argv)
{
	int	i = 1;
	while (i < argc)
	{
		this->_arg += argv[i];
		this->_arg += " ";
		i++;
	}
}
PmergeMe::PmergeMe(const PmergeMe &other){*this = other;}
PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	this->_vector = other._vector;
	this->_list = other._list;
	this->_arg = other._arg;
	this->_nbrElements = other._nbrElements;
	this->_vectorStartTime = other._vectorStartTime;
	this->_vectorEndTime = other._vectorEndTime;
	this->_listStartTime = other._listStartTime;
	this->_listEndTime = other._listEndTime;
	return (*this);
}
PmergeMe::~PmergeMe(void){}

//Exceptions
const char	*PmergeMe::BadInputException::what(void) const throw()
{
	return ("Error: bad input");
}

//Member Functions
void	PmergeMe::execute(void)
{
	assignValueToContainers();
	try{
		isArgValid();
		sortVector();
		sortList();
	} catch(BadInputException &e){
		std::cout << e.what() << std::endl;
	}
}

bool	PmergeMe::isArgValid(void)
{
	std::vector<int>::const_iterator it;
	for (it = this->_vector.begin(); it != this->_vector.end(); ++it)
	{
		if (*it < 0)
			throw (BadInputException());
	}
	std::vector<int>::const_iterator dup;
	for (it = this->_vector.begin(); it != this->_vector.end(); ++it)
	{
		std::vector<int>::const_iterator cpy = it;
		for (dup = ++cpy; dup != this->_vector.end(); ++dup)
		{
			if (*dup == *it)
				throw (BadInputException());
		}
	}
	return (true);
}

void	PmergeMe::assignValueToContainers(void)
{
	std::string	value;
	size_t		pos;

	while ((pos = this->_arg.find(" ")) != std::string::npos)
	{
		value = this->_arg.substr(0, pos);
		if (value.length() < 1)
		{
			this->_arg = this->_arg.erase(0, pos + 1);
			continue;
		}
		this->_vector.push_back(std::atoi(value.c_str()));
		this->_list.push_back(std::atoi(value.c_str()));
		this->_arg = this->_arg.erase(0, pos + 1);
	}
	this->_nbrElements = this->_vector.size();
}

void	PmergeMe::sortVector(void)
{
	int	i, key, j;
	for (i = 1; i < this->_nbrElements; i++)
	{
		key = this->_vector[i];
		j = i - 1;
		while (j >= 0 && this->_vector[j] > key)
		{
			this->_vector[j + 1] = this->_vector[j];
			j--;
		}
		this->_vector[j + 1] = key;
	}
	for (int i = 0; i < this->_nbrElements; i++)
		std::cout << this->_vector[i] << std::endl;
}

void	PmergeMe::sortList(void)
{
	
}
