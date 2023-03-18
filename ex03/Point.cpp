/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:44 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/18 19:30:32 by andrferr         ###   ########.fr       */
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
	*this = other;
}

Point &Point::operator=(const Point &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		&this->x = new Fixed(other.x);
		this->y = &other.y;
	}
	return (*this);
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
}