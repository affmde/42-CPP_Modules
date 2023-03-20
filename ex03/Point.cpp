/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 09:04:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->x = other.x;
	this->y = other.y;
	*this = other;
}

Point &Point::operator=(const Point &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		const_cast< Fixed& >(this->_x) = other.getX();
		const_cast< Fixed& >(this->_y) = rhs.getY();
		//this->x = other.getX();
		//this->y = other.getY();
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
	this->x = fixed;
}

void	Point::setY(Fixed fixed)
{
	this->y = fixed;
}