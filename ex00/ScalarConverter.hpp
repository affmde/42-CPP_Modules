/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:17:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/11 11:57:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include "helper.hpp"

class	ScalarConverter
{
	public:

		//Member Functions
		static void	converter(std::string);

	protected:

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter&);
		ScalarConverter	&operator=(const ScalarConverter&);
		~ScalarConverter(void);

};

#endif
