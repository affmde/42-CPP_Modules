/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:16:55 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/11 17:11:39 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <string>

ScalarConverter::ScalarConverter(void){}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(void){}


//Member Functions

void	ScalarConverter::converter(std::string str)
{
	int	type = string_detector(str);
	switch (type)
	{
		case 1:
			try{
				char c = str[0];
				converterFromChar(c);
			}catch(std::exception &e){}
			break;
		case 2:
		{
			try{
				int i  = std::stoi(str);
				converterFromInt(i);
			}catch(std::exception &e){}
		}
			break;
		case 3:
		{
			try{
				float f = std::stof(str);
				converterFromFloat(f);
			}catch(std::exception &e){}
			break;
		}
		case 4:
			try{
				double d = std::stod(str);
				converterFromDouble(d);
			}catch(std::exception &e){}
			break;
		case 5:
			convertInfinity();
			break;
		default:
			std::cout << "Invalid input" << std::endl;
	}
}
