/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:58:35 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replace.hpp"

int	checkInputStrings(std::string str)
{
	if (str.empty())
	{
		std::cout << "Empty strings are not accepted." << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		outfile_name;
	std::string		rep = ".replace";

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (checkInputStrings(argv[2]))
		return (0);
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << argv[1] << " file doesn not exist. Please enter a valid file." << std::endl;
		return (0);
	}
	outfile_name = argv[1] + rep;
	outfile.open(outfile_name);
	if (infile.is_open())
	{
		while(getline(infile, line))
		{
			Replace replace(line);
			if (outfile.is_open())
			{
				std::string out = replace.changeLine(argv[2], argv[3]);
				outfile << out << std::endl;
			}
		}
	}
	outfile.close();
	infile.close();
	return (0);
}
