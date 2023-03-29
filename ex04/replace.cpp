/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:15:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:55:25 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <sstream>

Replace::Replace(std::string line)
{
	this->line = line;
}

Replace::~Replace(void)
{

}

//Member functions

std::string	Replace::changeLine(std::string str1, std::string str2)
{
	size_t	index;
	size_t	found;
	std::string	out_line;

	index = 0;
	while (1)
	{
		found = line.find(str1, index);
		if (found == std::string::npos)
			break ;
		out_line.append(line, index, found - index);
		index = found + str1.size();
		out_line.append(str2);
	}
	out_line.append(line, index);
	return (out_line);
}
