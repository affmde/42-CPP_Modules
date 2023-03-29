/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:52:31 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 15:54:41 by andrferr         ###   ########.fr       */
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
