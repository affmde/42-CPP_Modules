/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:30:51 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/31 13:31:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceString.hpp"
#include <sstream>

ReplaceString::ReplaceString(std::string line)
{
	this->line = line;
}

ReplaceString::~ReplaceString(void)
{

}

//Member functions

std::string	ReplaceString::changeLine(std::string str1, std::string str2)
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
