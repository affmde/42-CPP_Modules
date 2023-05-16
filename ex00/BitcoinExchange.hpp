/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 16:16:15 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>

class	BitcoinExchange
{
	public:
		BitcoinExchange(std::string);
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange	&operator=(const BitcoinExchange&);
		~BitcoinExchange(void);

		//Member functions
		void	execute(void);

	private:
		std::string	_filename;
		std::string	_line;


		//Member Functions
		void	readFile(void);
		bool	lineValidity(void);
};

#endif
