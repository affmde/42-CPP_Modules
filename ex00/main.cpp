/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/17 10:15:14 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	//probably use a map container in this one
	if (argc != 2)
	{
		std::cout << "Error: Could not open file" << std::endl;
		return (0);
	}
	std::string filename(argv[1]);
	BitcoinExchange a(filename);
	a.execute();
	return (0);
}
