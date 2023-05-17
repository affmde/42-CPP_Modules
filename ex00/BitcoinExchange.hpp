/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/17 17:10:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

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
		std::string							_filename;
		std::string							_line;
		std::multimap<std::string,std::string>	_data;
		std::string							message;
		std::string							_date;
		int									_year;
		int									_month;
		int									_day;
		long								_value;
		//Member Functions
		void	readDataFile(void);
		void	readInputFile(void);
		void	lineParse(void);
		void	getDateValues(std::string&);
		bool	isLineValid(void);
		void	printMap(void);
};

#endif
