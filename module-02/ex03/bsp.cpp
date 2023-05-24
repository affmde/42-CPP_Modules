/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:09:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/05 16:35:44 by andrferr         ###   ########.fr       */
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

bool line_equation(Point const &a, Point const &b, Point const &point)
{
	float	x1 = a.getX().toFloat();
	float	y1 = a.getY().toFloat();
	float	x2 = b.getX().toFloat();
	float	y2 = b.getY().toFloat();
	float	py = point.getY().toFloat();
	float	px = point.getX().toFloat();

	float	slope = (y2 - y1) / (x2 - x1);
	int		c = y2 - slope * x2;

	if (py == slope * px + c)
		return (true);
	else
		return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	totalArea = triangle_area(a, b, c);
	if (line_equation(a, b, point))
		return (false);
	if (line_equation(a, c, point))
		return (false);
	if (line_equation(b, c, point))
		return (false);
	float	Area1 = triangle_area(point, b, c);
	float	Area2 = triangle_area(a, point, c);
	float	Area3 = triangle_area(a, b, point);
	line_equation(b, c, point);
	return (totalArea == Area1+Area2+Area3);
}
