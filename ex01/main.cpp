/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:17:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/17 13:38:17 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data a(42, "HIVE");

	uintptr_t val = Serializer::serialize(&a);
	std::cout << val << std::endl;
	Serializer::deserialize(val);
	std::cout << a.getNumber() << std::endl;
	std::cout << a.getString() << std::endl;

	return (0);
}
