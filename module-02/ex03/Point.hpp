/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:47:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/04 16:35:40 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(float a, float b);
		Point(const Point&);
		Point &operator=(const Point&);
		~Point(void);

		//Member Functions
		void	setX(Fixed fixed);
		void	setY(Fixed fixed);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		const Fixed	x;
		const Fixed	y;
};

#endif
