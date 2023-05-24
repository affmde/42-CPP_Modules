/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:16:55 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/19 09:59:59 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <string>
#include <iomanip>

ScalarConverter::ScalarConverter(void)
{
	ScalarConverter::_type = 0;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
	_type = other._type;
	return (*this);
}

ScalarConverter::~ScalarConverter(void){}


//Static variables instantialization
int		ScalarConverter::_type = 0;
char	ScalarConverter::_charValue = ' ';
int		ScalarConverter::_intValue = 0;
float	ScalarConverter::_floatValue = 0;
double	ScalarConverter::_doubleValue = 0;
bool	ScalarConverter::_charLimit = false;
bool	ScalarConverter::_intLimit = false;
bool	ScalarConverter::_floatLimit = false;
bool	ScalarConverter::_doubleLimit = false;

//Member Functions

void	ScalarConverter::converter(std::string str)
{
	std::cout << std::fixed << std::setprecision(1); //https://stackoverflow.com/questions/33317895/static-cast-int-to-float-no-decimals
	_getType(str);
	_checkLimits(str);
	switch(_type)
	{
		case 1:
			_convertFromChar(str);
			break;
		case 2:
			_convertFromInt(str);
			break;
		case 3:
			_convertFromFloat(str);
			break;
		case 4:
			_convertFromFloat(str);
			break;
		case 5:
			_printPseudoLiteral(str);
			break;
		default:
			std::cout << "invalid input" << std::endl;
	}
	if (_type > 0 && _type < 5)
	{
		_printChar(_charValue);
		_printInt(_intValue);
		_printFloat(_floatValue);
		_printDouble(_doubleValue);
	}

}

bool	ScalarConverter::_isChar(std::string str)
{
	if (str.length() == 1 && str[1] == '\0' && std::isprint(str[0]) && !std::isdigit(str[0]))
		return (true);
	return (false);
}

bool	ScalarConverter::_isInt(std::string str)
{
	int		i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
		if (!std::isdigit(str[i++]))
			return (false);
	return (true);
}

bool	ScalarConverter::_isFloat(std::string str)
{
	int		i = 0;
	bool	hasDot = false;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (false);
		if (str[i] == '.' && hasDot)
			return (false);
		if (str[i] == 'f' && (str[i + 1] != '\0' || !hasDot))
			return (false);
		if (str[i] == '.')
			hasDot = true;
		i++;
	}
	if (str[i - 1] == 'f')
		return (true);
	return (false);
}

bool	ScalarConverter::_isDouble(std::string str)
{
	int		i = 0;
	bool	hasDot = false;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (false);
		if (str[i] == '.' && hasDot)
			return (false);
		if (str[i] == '.')
			hasDot = true;
		i++;
	}
	return (true);
}

bool	ScalarConverter::_isPseudoLiteral(std::string str)
{
	std::string pseudoLiteralsArray[] = {
		"+inff",
		"-inff",
		"nanf",
		"+inf",
		"-inf",
		"nan"
	};
	for (int i = 0; i < 6; i++)
	{
		if (pseudoLiteralsArray[i] == str)
			return (true);
	}
	return (false);
}

void	ScalarConverter::_getType(std::string str)
{
	if (_isChar(str))
		_type = CHAR;
	else if (_isInt(str))
		_type = INT;
	else if (_isFloat(str))
		_type = FLOAT;
	else if (_isDouble(str))
		_type = DOUBLE;
	else if (_isPseudoLiteral(str))
		_type = PSEUDOLITERAL;
}

void	ScalarConverter::_checkLimits(std::string str)
{
	double val = std::strtod(str.c_str(), NULL);
	if (val < 0 || val > 127)
		_charLimit = true;
	if (val < INT_MIN || val > INT_MAX)
		_intLimit = true;
	if (val < -FLT_MAX|| val > FLT_MAX)
		_floatLimit = true;
	if ((val < -DBL_MAX || val > DBL_MAX))
		_doubleLimit = true;
}

void	ScalarConverter::_convertFromChar(std::string str)
{
	_charValue = str[0];
	_intValue = static_cast<int>(_charValue);
	_floatValue = static_cast<float>(_charValue);
	_doubleValue = static_cast<double>(_charValue);
}

void	ScalarConverter::_convertFromInt(std::string str)
{
	_intValue = atoi(str.c_str());
	_charValue = static_cast<char>(_intValue);
	_floatValue = static_cast<float>(_intValue);
	_doubleValue = static_cast<double>(_intValue);
}

void	ScalarConverter::_convertFromFloat(std::string str)
{
	_floatValue = std::atof(str.c_str());
	_charValue = static_cast<char>(_floatValue);
	_intValue = static_cast<int>(_floatValue);
	_doubleValue = static_cast<double>(_floatValue);
}

void	ScalarConverter::_convertFromDouble(std::string str)
{
	_doubleValue = std::strtod(str.c_str(), NULL);
	_charValue = static_cast<char>(_doubleValue);
	_intValue = static_cast<int>(_doubleValue);
	_floatValue = static_cast<float>(_doubleValue);
}

void	ScalarConverter::_printChar(char c)
{
	if (!std::isprint(c))
		std::cout << "char: Not printable" << std::endl;
	else if (_charLimit)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	ScalarConverter::_printInt(int val)
{
	if (_intLimit)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << val << std::endl;
}

void	ScalarConverter::_printFloat(float f)
{
	if (_floatLimit || (_intLimit && _type == INT))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void	ScalarConverter::_printDouble(double d)
{
	if (_doubleLimit || (_floatLimit && _type == FLOAT) || (_intLimit && _type == INT))
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::_printPseudoLiteral(std::string str)
{
	std::string pseudoLiteralsArray[] = {
		"+inff",
		"-inff",
		"nanf",
		"+inf",
		"-inf",
		"nan"
	};
	for (int i = 0; i < 6; i++)
	{
		if (pseudoLiteralsArray[i] == str)
		{
			if (i >=0 && i <= 2)
				str[str.length() - 1] = '\0';
		}
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}
