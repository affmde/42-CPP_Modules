/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:55:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/11 17:12:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.hpp"

int	is_number(std::string str)
{
	int i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	string_detector(std::string str)
{
	if (str.find(' ') != std::string::npos && str.length() > 1 && std::isprint(str[0]))
		return (0);
	if (str.length() == 1 && isalpha(str[0]))
		return (1);
	else if (is_number(str))
		return (2);
	if (str.length() > 1 && str.back() == 'f')
		return (3);
	else if (str.find('.') != std::string::npos && str.back() != 'f')
		return (4);
	else if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (5);

	return (-1);
}

void	converterFromFloat(float f)
{
	std::string msg = "Non displayable";
	char c;
	std::cout << "char: ";
	c = static_cast<char>(f);
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Not displayable" << std::endl;
	int	i = static_cast<int>(f);;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" <<std::endl;
	double d = static_cast<double>(f);
	float result = f - static_cast<int>(f);
	if (result == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	converterFromInt(int i)
{
	char c = static_cast<char>(i);
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Not displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	float f = static_cast<float>(i);
	std::cout << "float: " << f << ".0f" <<std::endl;
	double d = static_cast<double>(f);
	std::cout << "double: " << d << ".0" << std::endl;
}

void	converterFromDouble(double d)
{
	char c = static_cast<char>(d);
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Not displayable" << std::endl;
	int i = static_cast<int>(d);
	std::cout << "int: " << i << std::endl;
	float result = d - static_cast<int>(d);
	float f = static_cast<float>(d);
	if (result == 0)
		std::cout << "float: " << f << ".0f" <<std::endl;
	else
		std::cout << "float: " << f << "f" <<std::endl;
	if (result == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	converterFromChar(char c)
{
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Not displayable" << std::endl;
	int i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;
	float result = c - static_cast<int>(c);
	float f = static_cast<float>(c);
	if (result == 0)
		std::cout << "float: " << f << ".0f" <<std::endl;
	else
		std::cout << "float: " << f << "f" <<std::endl;
	double d = static_cast<double>(c);
	if (result == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	convertInfinity(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}
