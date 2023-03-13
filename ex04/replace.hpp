/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:15:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 17:53:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>

using namespace std;

class Replace
{
	public:
	Replace(string line);
	~Replace(void);
	string	ChangeLine(string str1, string str2);

	private:
	string line;
};

#endif
