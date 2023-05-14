/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:17:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 11:27:08 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data a(42, "HIVE");
	
	uintptr_t val = Serializer::serialize(&a);
	Serializer::deserialize(val);
	std::cout << a.getNumber() << std::endl;
	std::cout << a.getString() << std::endl;
	
	return (0);
}