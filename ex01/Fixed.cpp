/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:32:50 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/15 17:56:54 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(int n)
{
	this->number = n;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float f)
{
	this->number = f;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRowBits(fixed.getRawBits());
	return (*this);

}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void	Fixed::setRowBits(int const raw)
{
	number = raw;
}

float Fixed::toFloat(void) const
{
	return (0.5f);
}

int	Fixed::toInt(void) const
{
	return (0);
}

// void	operator<<(std::ostream o, int float_point)
// {

// }
