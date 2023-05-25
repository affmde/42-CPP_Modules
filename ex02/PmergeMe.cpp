/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:09:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/25 17:45:01 by andrferr         ###   ########.fr       */
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
	this->_deque = other._deque;
	this->_arg = other._arg;
	this->_sortedArg = other._sortedArg;
	this->_nbrElements = other._nbrElements;
	this->_vectorStartTime = other._vectorStartTime;
	this->_vectorEndTime = other._vectorEndTime;
	this->_dequeStartTime = other._dequeStartTime;
	this->_dequeEndTime = other._dequeEndTime;
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
		handleDeque();
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
	vectorInsertMergeSort(0, this->_vector.size() - 1);
	this->_vectorEndTime = getTime();
}

void	PmergeMe::handleDeque(void)
{
	this->_dequeStartTime = getTime();
	populateDeque();
	isArgValid();
	dequeInsertMergeSort(0, this->_deque.size() - 1);
	this->_dequeEndTime = getTime();
}

void	PmergeMe::printOutput(void)
{
	unsigned int	vector_time = this->_vectorEndTime - this->_vectorStartTime;
	unsigned int	deque_time = this->_dequeEndTime - this->_dequeStartTime;
	std::cout << "Before: " << this->_arg << std::endl;
	std::cout << "After: " << this->_sortedArg;
	for (int i = 0; i < this->_nbrElements; i++)
		std::cout << this->_vector[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->_nbrElements << " elements with std::vector: " << vector_time << " microseconds" << std::endl;
	std::cout << "Time to process a range of " << this->_nbrElements << " elements with std::deque: " << deque_time << " microseconds" << std::endl;
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

void	PmergeMe::populateDeque(void)
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
		this->_deque.push_back(std::atoi(value.c_str()));
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
	//ALLOW REPEATED ELEMENTS??
	// std::vector<int>::const_iterator dup;
	// for (it = this->_vector.begin(); it != this->_vector.end(); ++it)
	// {
	// 	std::vector<int>::const_iterator cpy = it;
	// 	for (dup = ++cpy; dup != this->_vector.end(); ++dup)
	// 	{
	// 		if (*dup == *it)
	// 			throw (BadInputException());
	// 	}
	// }
	return (true);
}

unsigned long	PmergeMe::getTime(void)
{
	timeval	time;

	gettimeofday(&time, NULL);
	return (1000000 * time.tv_sec + time.tv_usec);
}

void	PmergeMe::vectorInsertMergeSort(int start, int end)
{
	if (end - start > 10)
	{
		int	middle = (start + end) / 2;
		vectorInsertMergeSort(start, middle);
		vectorInsertMergeSort(middle + 1, end);
		vectorMerge(start, middle, end);
	}
	else
		vectorInsert(start, end);
}

void	PmergeMe::vectorMerge(int start, int middle, int end)
{
	std::vector<int>::iterator a = this->_vector.begin() + start;
	std::vector<int>::iterator b = this->_vector.begin() + middle + 1;
	std::vector<int>::iterator c = this->_vector.begin() + end + 1;
	std::vector<int> leftVec(a, b);
	std::vector<int> rightVec(b, c);
	int	n1 = middle - start + 1;
	int	n2 = end - middle;
	int	right_index = 0;
	int	left_index = 0;

	for (int i = start; i < end - start + 1; i++)
	{
		if (right_index == n2)
		{
			this->_vector[i] = leftVec[left_index];
			left_index++;
		}
		else if (left_index == n1)
		{
			this->_vector[i] = rightVec[right_index];
			right_index++;
		}
		else if (rightVec[right_index] > leftVec[left_index])
		{
			this->_vector[i] = leftVec[left_index];
			left_index++;
		}
		else
		{
			this->_vector[i] = rightVec[right_index];
			right_index++;
		}
	}
}

void	PmergeMe::vectorInsert(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int temp = this->_vector[i + 1];
		int j = i + 1;
		while (j > start && this->_vector[j - 1] > temp)
		{
			this->_vector[j] = this->_vector[j - 1];
			j--;
		}
		this->_vector[j] = temp;
	}
}


void	PmergeMe::dequeInsertMergeSort(int start, int end)
{
	if (end - start > 5)
	{
		int	middle = (start + end) / 2;
		dequeInsertMergeSort(start, middle);
		dequeInsertMergeSort(middle + 1, end);
		dequeMerge(start, middle, end);
	}
	else
		dequeInsert(start, end);
}

void	PmergeMe::dequeMerge(int start, int middle, int end)
{
	std::deque<int>::iterator a = this->_deque.begin() + start;
	std::deque<int>::iterator b = this->_deque.begin() + middle + 1;
	std::deque<int>::iterator c = this->_deque.begin() + end + 1;
	std::deque<int> leftDeque(a, b);
	std::deque<int> rightDeque(b, c);
	int	n1 = middle - start + 1;
	int	n2 = end - middle;
	int	right_index = 0;
	int	left_index = 0;

	for (int i = start; i < end - start; i++)
	{
		if (right_index == n2)
		{
			this->_deque[i] = leftDeque[left_index];
			left_index++;
		}
		else if (left_index == n1)
		{
			this->_deque[i] = rightDeque[right_index];
			right_index++;
		}
		else if (rightDeque[right_index] > leftDeque[left_index])
		{
			this->_deque[i] = leftDeque[left_index];
			left_index++;
		}
		else
		{
			this->_deque[i] = rightDeque[right_index];
			right_index++;
		}
	}
}

void	PmergeMe::dequeInsert(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int temp = this->_deque[i + 1];
		int j = i + 1;
		while (j > start && this->_deque[j - 1] > temp)
		{
			this->_deque[j] = this->_deque[j - 1];
			j--;
		}
		this->_deque[j] = temp;
	}
}
