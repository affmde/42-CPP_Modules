/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:32:50 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/16 17:30:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = n << fractional_bits;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor started" << std::endl;
	this->fixed_point = std::roundf(f * (1 << fractional_bits));
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
	return (fixed_point);
}

void	Fixed::setRowBits(int const raw)
{
	fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	float val = static_cast<float>(this->fixed_point) / (1 << fractional_bits);
	return (val);
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> fractional_bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

//Overload arithmetic operators

Fixed Fixed::operator+(const Fixed &fixed)
{
	return (Fixed(this->fixed_point + fixed.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed)
{

	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

//Overload Increment and Decrement Operator

Fixed & Fixed::operator++(void)
{
	++this->fixed_point;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	--this->fixed_point;
	return (*this);
}

Fixed & Fixed::operator++(int)
{
	this->fixed_point++;
	return (*this);
}

Fixed & Fixed::operator--(int)
{
	this->fixed_point--;
	return (*this);
}

//Overload the comparision operators

bool Fixed::operator>(const Fixed &fixed)
{
	bool is_higher;
	is_higher = this->getRawBits() > fixed.getRawBits() ? true : false;
	return (is_higher);
}

bool Fixed::operator<(const Fixed &fixed)
{
	bool is_smaller;
	is_smaller = this->getRawBits() < fixed.getRawBits() ? true : false;
	return (is_smaller);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	bool is_higher;
	is_higher = this->getRawBits() >= fixed.getRawBits() ? true : false;
	return (is_higher);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	bool is_smaller;
	is_smaller = this->getRawBits() <= fixed.getRawBits() ? true : false;
	return (is_smaller);
}

bool Fixed::operator==(const Fixed &fixed)
{
	bool is_equal;
	is_equal = this->getRawBits() == fixed.getRawBits() ? true : false;
	return (is_equal);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	bool is_not_equal;
	is_not_equal = this->getRawBits() != fixed.getRawBits() ? true : false;
	return (is_not_equal);
}

//Member functions

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
