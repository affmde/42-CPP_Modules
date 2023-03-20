/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:46:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 12:59:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a;
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);
	std::cout << (bsp(a,b,c,Point(5.0f, 15.5f)) ? "true" : "false") << std::endl;
	return (0);
}
