/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/19 17:01:13 by andrferr         ###   ########.fr       */
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
		float								_value;
		//Member Functions
		void	readDataFile(void);
		void	readInputFile(void);
		void	lineParse(void);
		void	dateStringToIntConverter(std::string&, int&, int&, int&);
		bool	isDateValid(void);
		bool	isValueValid(void);
		void	printMap(void);
		void	printInfo(std::string, std::string);
		void	findClosestDate(std::multimap<std::string, std::string>::iterator &);
		bool	isEarlierDate(std::multimap<std::string, std::string>::iterator &);
};

#endif
