/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:15:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 18:13:50 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <sstream>

Replace::Replace(string line)
{
	this->line = line;
}

Replace::~Replace(void)
{

}

string	Replace::ChangeLine(string str1, string str2)
{
	size_t	index;
	size_t	found;
	string	out_line;

	index = 0;
	while (1)
	{
		found = line.find(str1, index);
		if (found == string::npos)
			break ;
		out_line.append(line, index, found - index);
		index = found + str1.size();
		out_line.append(str2);
	}
	out_line.append(line, index);
	return (out_line);
}
