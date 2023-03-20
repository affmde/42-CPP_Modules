/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:09:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 13:02:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float f_abs(float f)
{
	if (f < 0)
		return (-f);
	return (f);
}

float triangle_area(Point const a, Point const b, Point const c)
{
	float	area;
	float	A1;
	float	A2;
	float	A3;

	A1 = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
	A2 = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
	A3 = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
	area = f_abs((A1 + A2 + A3) / 2);
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	totalArea = triangle_area(a, b, c);
	float	Area1 = triangle_area(point, b, c);
	float	Area2 = triangle_area(a, point, c);
	float	Area3 = triangle_area(a, b, point);
	return (totalArea == Area1+Area2+Area3);
}
