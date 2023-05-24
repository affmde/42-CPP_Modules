/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:46:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/05 16:40:03 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{std::cout << "Test 1: Point inside triangle: (should return true)" << std::endl;
	Point a;
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	std::cout << (bsp(a,b,c,Point(10.0f, 15.0f)) ? "	-> Yes, point is inside the triangle" : "	-> No, point is not inside the triangle") << std::endl;}


	/*Testing Point on the line*/
	{std::cout << "\nTest 2: Point inside triangle: (should return false)" << std::endl;
	Point a;
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	std::cout << (bsp(a,b,c,c) ? "	-> Yes, point is inside the triangle" : "	-> No, point is not inside the triangle") << std::endl;}


	/*testing point out of the triangle*/
	std::cout << "\nTest 3: Point inside triangle: (should return false)" << std::endl;
	Point a;
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	std::cout << (bsp(a,b,c,Point(15.0f, 35.0f)) ? "	-> Yes, point is inside the triangle" : "	-> No, point is not inside the triangle") << std::endl;
	return (0);
}
