/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 12:50:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	std::cout << "Default constructor called" << std::endl;
	const_cast<Fixed&>(this->x) = 0;
	const_cast<Fixed&>(this->y) = 0;
}

Point::Point(const Point &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Point::Point(float a, float b)
{
	this->setX(a);
	this->setY(b);
}

Point &Point::operator=(const Point &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		const_cast<Fixed&>(this->x) = other.getX();
		const_cast<Fixed&>(this->y) = other.getY();
	}
	return (*this);
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
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
