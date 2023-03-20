/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:46:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/20 09:06:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a;
	a.setX(Fixed(20));
	a.setY(Fixed(30));
	Point b = (const Point)a;
	std::cout << b.getX() << std::endl;
	return (0);
}