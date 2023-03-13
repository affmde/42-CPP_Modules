/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 18:28:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "replace.hpp"

using namespace std;

int	CheckInputStrings(string str1, string str2)
{
	if (str1.empty() || str2.empty())
	{
		cout << "Empty strings are not accepted." << endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ifstream	infile;
	ofstream	outfile;
	string		line;
	string		outfile_name;
	string		rep = ".replace";

	if (argc != 4)
	{
		cout << "Wrong number of arguments" << endl;
		return (1);
	}
	if (CheckInputStrings(argv[2], argv[3]))
		return (0);
	infile.open(argv[1]);
	if (infile.fail())
	{
		cout << argv[1] << " file doesn not exist. Please enter a valid file." << endl;
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
				string out = replace.ChangeLine(argv[2], argv[3]);
				outfile << out << endl;
			}
		}
	}
	outfile.close();
	infile.close();
	return (0);
}
