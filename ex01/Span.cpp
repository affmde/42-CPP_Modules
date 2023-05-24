/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:43:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/24 10:21:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->_max = n;
}

Span::Span(const Span &other)
{
	this->_max = other._max;
}

Span	&Span::operator=(const Span &other)
{
	this->_max = other._max;
	this->_elements = other._elements;
	return (*this);
}

Span::~Span(void){}

//Exception

const char	*Span::SpanFullException::what() const throw(){
	return ("Span is already full");
}

const char	*Span::NotEnoughElementsExceptions::what() const throw(){
	return ("Not enough elements in Span to compare");
}

//Member Functions

void	Span::addNumber(int n)
{
	if (this->_elements.size() + 1 > this->_max)
		throw (SpanFullException());
	this->_elements.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (this->_elements.size() + 1 > this->_max)
		throw (SpanFullException());
	this->_elements.insert(this->_elements.end(), start, end);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_elements.size() < 2)
		throw (SpanFullException());
	std::sort(this->_elements.begin(), this->_elements.end());
	int	dif = 2147483647;
	for (unsigned int i = 0; i < this->_max - 1; i++)
		if (this->_elements[i + 1] - this->_elements[i] < dif)
			dif = this->_elements[i + 1] - this->_elements[i];
	return (dif);
}

unsigned int	Span::longestSpan(void)
{
	std::vector<int>::iterator	max;
	std::vector<int>::iterator	min;

	if (this->_elements.size() < 2)
		throw (SpanFullException());
	max = std::max_element(this->_elements.begin(), this->_elements.end());
	min = std::min_element(this->_elements.begin(), this->_elements.end());
	return (*max - *min);
}
