/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:28:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/31 13:28:18 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>

class Replace
{
	public:
		Replace(std::string line);
		~Replace(void);

		//Member Functions
		std::string	changeLine(std::string str1, std::string str2);

	private:
		std::string	line;
};

#endif
