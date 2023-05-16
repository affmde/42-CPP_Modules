/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 16:11:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	//probably use a map container in this one
	if (argc != 2)
	{
		std::cout << "Error: Could not open file" << std::endl;
	}
	std::string filename(argv[1]);
	BitcoinExchange a(filename);
	a.execute();
	return (0);
}
