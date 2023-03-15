/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:32:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/15 15:58:26 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
	Fixed(int n = 0);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed&);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRowBits(int const raw);

	private:
	int					number;
	static const int	bits = 8;
};

#endif
