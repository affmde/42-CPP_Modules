/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceString.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:30:13 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/31 13:30:33 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>

class ReplaceString
{
	public:
		ReplaceString(std::string line);
		~ReplaceString(void);

		//Member Functions
		std::string	changeLine(std::string str1, std::string str2);

	private:
		std::string	line;
};

#endif
