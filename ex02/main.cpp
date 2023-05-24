/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:52:56 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/04 15:19:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << (Fixed(100) > Fixed (50) ? "True" : "False") << std::endl;
	std::cout << (Fixed(100) < Fixed (50) ? "True" : "False") << std::endl;
	std::cout << (Fixed(50) == Fixed (50) ? "True" : "False") << std::endl;

	std::cout << (Fixed::min(Fixed(50), Fixed(50))) << std::endl;
	std::cout << (Fixed (5) * Fixed (4) )<< std::endl;
	return 0;
}
