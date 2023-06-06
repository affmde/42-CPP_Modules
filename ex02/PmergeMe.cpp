/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:09:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/06 12:41:00 by andrferr         ###   ########.fr       */
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
		isArgValid();
		handleVector();
		handleDeque();
		printOutput();
	} catch(BadInputException &e){
		std::cout << e.what() << std::endl;
	}
}

bool	PmergeMe::isArgValid(void)
{
	for (int j = 0; j < (int)this->_arg.length(); j++)
		if (!std::isdigit(this->_arg[j]) && this->_arg[j] != ' ')
			throw (BadInputException());
	std::vector<int> v = createVector();
	this->_nbrElements = v.size();
	std::vector<int>::const_iterator it;
	this->_arg = "";
	for (it = v.begin(); it != v.end(); ++it)
	{
		this->_arg += (numberToString(*it) + " ");
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

//Vector Functions

void	PmergeMe::handleVector(void)
{
	this->_vectorStartTime = getTime();
	this->_vector = createVector();
	vectorInsertMergeSort(0, this->_vector.size() - 1);
	this->_vectorEndTime = getTime();
}

std::vector<int>	PmergeMe::createVector(void)
{
	std::string	value;
	std::string	str;
	std::vector<int>	v;
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
		v.push_back(std::atoi(value.c_str()));
		str = str.erase(0, pos + 1);
	}
	return (v);
}

void	PmergeMe::vectorInsertMergeSort(int start, int end)
{
	if (start < end)
	{
		if (end - start > 5)
		{
			int	middle = start + (end - start) / 2;
			vectorInsertMergeSort(start, middle);
			vectorInsertMergeSort(middle + 1, end);
			vectorMerge(start, middle, end);
		}
		else
			vectorInsert(start, end);
	}
}

void	PmergeMe::vectorMerge(int start, int middle, int end)
{
	int i, j, k;
	int n1 = middle - start + 1;
	int n2 = end - middle;

	std::vector<int> left(n1), right(n2);

	for (i = 0; i < n1; ++i)
		left[i] = this->_vector[start + i];
	for (j = 0; j < n2; ++j)
		right[j] = this->_vector[middle + 1 + j];

	i = 0;
	j = 0;
	k = start;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j])
			this->_vector[k++] = left[i++];
		else
			this->_vector[k++] = right[j++];
	}
	while (i < n1)
		this->_vector[k++] = left[i++];

	while (j < n2)
		this->_vector[k++] = right[j++];
}

void	PmergeMe::vectorInsert(int start, int end)
{
	for (int i = start + 1; i <= end; ++i) {
		int tmp = this->_vector[i];
		int j = i - 1;
		for (; j >= start && this->_vector[j] > tmp; --j)
			this->_vector[j + 1] = this->_vector[j];
		this->_vector[j + 1] = tmp;
	}
}

// Deque Functions

void	PmergeMe::handleDeque(void)
{
	this->_dequeStartTime = getTime();
	this->_deque = createDeque();
	dequeInsertMergeSort(0, this->_deque.size() - 1);
	this->_dequeEndTime = getTime();
}



std::deque<int>	PmergeMe::createDeque(void)
{
	std::string	value;
	std::string	str;
	std::deque<int> deque;
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
		deque.push_back(std::atoi(value.c_str()));
		str = str.erase(0, pos + 1);
	}
	return (deque);
}

void	PmergeMe::dequeInsertMergeSort(int start, int end)
{
	if (start > end)
	{
		if (end - start > 5)
		{
			int	middle = start + (end - start) / 2;
			dequeInsertMergeSort(start, middle);
			dequeInsertMergeSort(middle + 1, end);
			dequeMerge(start, middle, end);
		}
		else
			dequeInsert(start, end);
	}
}

void	PmergeMe::dequeMerge(int start, int middle, int end)
{
	int i, j, k;
		int n1 = middle - start + 1;
		int n2 = end - middle;

		std::deque<int> left(n1), right(n2);

		for (i = 0; i < n1; ++i)
			left[i] = this->_deque[start + i];
		for (j = 0; j < n2; ++j)
			right[j] = this->_deque[middle + 1 + j];

		i = 0;
		j = 0;
		k = start;
		while (i < n1 && j < n2) {
			if (left[i] <= right[j])
				this->_deque[k++] = left[i++];
			else
				this->_deque[k++] = right[j++];
		}
		while (i < n1)
			this->_deque[k++] = left[i++];

		while (j < n2)
			this->_deque[k++] = right[j++];
}

void	PmergeMe::dequeInsert(int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		int temp = this->_deque[i];
		int j = i - 1;
		while (j >= start && this->_deque[j] > temp)
		{
			this->_deque[j + 1] = this->_deque[j];
			j--;
		}
		this->_deque[j + 1] = temp;
	}
}

//Helper Function


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

std::string	PmergeMe::numberToString(int num)
{
	std::ostringstream	str;
	std::string			ret;
	str << num;
	ret = str.str();
	return (ret);
}

unsigned long	PmergeMe::getTime(void)
{
	timeval	time;

	gettimeofday(&time, NULL);
	return (1000000 * time.tv_sec + time.tv_usec);
}
