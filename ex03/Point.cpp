/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/04 16:43:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const Point &other)
{
	std::cout << "Point copy constructor called" << std::endl;
	*this = other;
}

Point::Point(float a, float b)
{
	this->setX(a);
	this->setY(b);
}

Point &Point::operator=(const Point &other)
{
	std::cout << "Point copy assignement operator called" << std::endl;
	if (this != &other)
	{
		const_cast<Fixed&>(this->x) = other.getX();
		const_cast<Fixed&>(this->y) = other.getY();
	}
	return (*this);
}

Point::~Point(void)
{
	std::cout << "Point destructor called" << std::endl;
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

void	Point::setX(Fixed fixed)
{
	const_cast<Fixed&>(this->x) = fixed;
}

void	Point::setY(Fixed fixed)
{
	const_cast<Fixed&>(this->y) = fixed;
}
