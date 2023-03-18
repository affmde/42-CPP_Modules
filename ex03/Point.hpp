/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/18 19:09:39 by andrferr         ###   ########.fr       */
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


	private:
	const Fixed	x;
	const Fixed	y;
};

#endif