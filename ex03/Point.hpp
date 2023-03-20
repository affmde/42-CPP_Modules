/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 09:03:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
	Point(void);
	Point(const Point&);
	Point &Point::operator=(const Point&);
	~Point(void);


	void	setX(Fixed);
	void	setY(Fixed);
	Fixed	getX(void) const;
	Fixed	getY(void) const;

	private:
	const Fixed	x;
	const Fixed	y;
};

#endif