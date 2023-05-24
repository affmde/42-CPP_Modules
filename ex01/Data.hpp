/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 11:25:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	public:
		Data(int, std::string);
		Data(const Data&);
		Data	&operator=(const Data&);
		~Data(void);

		//Member Functions
		void		setNumber(int);
		int			getNumber(void);
		void		setString(std::string);
		std::string	getString(void);
		
	private:
		int	number;
		std::string str;
};

#endif