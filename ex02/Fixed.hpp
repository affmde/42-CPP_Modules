/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:32:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/16 16:39:33 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed&);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRowBits(int const raw);
	Fixed &operator+(const Fixed &);
	Fixed &operator-(const Fixed &);
	Fixed &operator*(const Fixed &);
	Fixed &operator/(const Fixed &);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed &operator++(int);
	Fixed &operator--(int);
	bool operator>(const Fixed &);
	bool operator<(const Fixed &);
	bool operator>=(const Fixed &);
	bool operator<=(const Fixed &);
	bool operator==(const Fixed &);
	bool operator!=(const Fixed &);
	private:
	int					fixed_point;
	static const int	fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif
