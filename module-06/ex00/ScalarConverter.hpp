/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:17:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/12 19:42:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <limits.h>
#include <float.h>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define PSEUDOLITERAL 5

class	ScalarConverter
{
	public:

		//Member Functions
		static void	converter(std::string);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter&);
		ScalarConverter	&operator=(const ScalarConverter&);
		~ScalarConverter(void);

		//Member Functions
		static void		_getType(std::string);
		static bool		_isChar(std::string);
		static bool		_isInt(std::string);
		static bool		_isFloat(std::string);
		static bool		_isDouble(std::string);
		static bool		_isPseudoLiteral(std::string);
		static void		_checkLimits(std::string);
	
		static void		_convertFromChar(std::string);
		static void		_convertFromInt(std::string);
		static void		_convertFromFloat(std::string);
		static void		_convertFromDouble(std::string);

		static void		_printChar(char);
		static void		_printInt(int);
		static void		_printFloat(float);
		static void		_printDouble(double);
		static void		_printPseudoLiteral(std::string);
		
		//Atributes
		static int		_type;
		static char		_charValue;
		static int		_intValue;
		static float	_floatValue;
		static double	_doubleValue;
		static bool		_charLimit;
		static bool		_intLimit;
		static bool		_floatLimit;
		static bool		_doubleLimit;
};

#endif
