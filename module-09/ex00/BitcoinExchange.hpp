/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:17:46 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/07 12:27:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

class	BitcoinExchange
{
	public:
		BitcoinExchange(std::string);
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange	&operator=(const BitcoinExchange&);
		~BitcoinExchange(void);

		//Member functions
		void	execute(void);

		//Exceptions
		class	BadInputException : std::exception{
			public:
				const char	*what(void) const throw();
		};
		class	NotAPositiveNumberException : std::exception{
			public:
				const char	*what(void) const throw();
		};
		class	TooLargeNumberException : std::exception{
			public:
				const char	*what(void) const throw();
		};
		class	BadValueException : std::exception{
			public:
				const char	*what(void) const throw();
		};
		class	NoDataException : std::exception{
			public:
				const char	*what(void) const throw();
		};

	private:
		std::string							_filename;
		std::string							_line;
		std::map<std::string,std::string>	_data;
		std::string							_date;
		int									_year;
		int									_month;
		int									_day;
		float								_value;

		//Member Functions
		void		readDataFile(void);
		void		readInputFile(void);
		void		lineParse(void);
		void		dateStringToIntConverter(std::string, int&, int&, int&);
		bool		isDateValid(void);
		bool		isValueValid(std::string);
		void		printMap(void);
		void		printInfo(std::string, std::string);
		void		findClosestDate(std::map<std::string, std::string>::iterator &);
		bool		isEarlierDate(std::map<std::string, std::string>::iterator &);
		std::string	numberToString(int);
		std::string	convertToDate(void);
};

#endif
