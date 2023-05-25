/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:09:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/25 10:07:31 by andrferr         ###   ########.fr       */
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
	try{
		handleVector();
		handleList();
		printOutput();
	} catch(BadInputException &e){
		std::cout << e.what() << std::endl;
	}
}

void	PmergeMe::handleVector(void)
{
	this->_vectorStartTime = getTime();
	populateVector();
	isArgValid();
	sortVector();
	this->_vectorEndTime = getTime();
}

void	PmergeMe::handleList(void)
{
	this->_listStartTime = getTime();
	populateList();
	isArgValid();
	sortList();
	this->_listEndTime = getTime();
}

void	PmergeMe::printOutput(void)
{
	std::cout << "Before:" << this->_arg << std::endl;
	std::cout << "After: " << this->_sortedArg << std::endl;
}

void	PmergeMe::populateVector(void)
{
	std::string	value;
	std::string	str;
	size_t		pos;

	str = this->_arg;
	while ((pos = str.find(" ")) != std::string::npos)
	{
		value = str.substr(0, pos);
		if (value.length() < 1)
		{
			str = str.erase(0, pos + 1);
			continue;
		}
		this->_vector.push_back(std::atoi(value.c_str()));
		str = str.erase(0, pos + 1);
	}
	this->_nbrElements = this->_vector.size();
}

void	PmergeMe::populateList(void)
{
	std::string	value;
	std::string	str;
	size_t		pos;

	str = this->_arg;
	while ((pos = str.find(" ")) != std::string::npos)
	{
		value = str.substr(0, pos);
		if (value.length() < 1)
		{
			str = str.erase(0, pos + 1);
			continue;
		}
		this->_list.push_back(std::atoi(value.c_str()));
		str = str.erase(0, pos + 1);
	}
	this->_nbrElements = this->_vector.size();
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
		this->_sortedArg += this->_vector[i] + "";
}

void	PmergeMe::sortList(void)
{
	
}

unsigned long	PmergeMe::getTime(void)
{
	timeval	time;
	
	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}