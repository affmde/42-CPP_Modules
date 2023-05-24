/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:17:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/20 08:38:00 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data a(42, "HIVE");

	uintptr_t val = Serializer::serialize(&a);
	std::cout << val << std::endl;
	std::cout << Serializer::deserialize(val)->getNumber() << std::endl;
	std::cout << Serializer::deserialize(val)->getString() << std::endl;

	return (0);
}
