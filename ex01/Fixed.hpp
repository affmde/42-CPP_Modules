/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:32:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/15 17:26:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed&);
	float	toFloat(void) const;
	int		toInt(void) const;
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRowBits(int const raw);

	private:
	int					number;
	static const int	bits = 8;
};

#endif
