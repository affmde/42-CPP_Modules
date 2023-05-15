/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:10:38 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/15 12:35:48 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int	main(void)
{
	int	iArray[] = {1, 2, 3, 4, 5};
	iter<int>(iArray, (unsigned int)5, multiplyByTwo);
	for (int i = 0; i < 5; i++)
		std::cout << iArray[i] << std::endl;
	float	fArray[] = {1.3f, 2.8f, 3.0f, 4.7f, 5.6f};
	iter<float>(fArray, (unsigned int)5, multiplyByTwo);
	for (int i = 0; i < 5; i++)
		std::cout << fArray[i] << std::endl;
	char	strArray[] = {'a', 'b', 'C', 'd', 'E'};
	iter<char>(strArray, (unsigned int)5, toUpperCase);
	for (int i = 0; i < 5; i++)
		std::cout << strArray[i] << std::endl;
	return (0);
}