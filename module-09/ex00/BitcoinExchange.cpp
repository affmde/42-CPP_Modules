/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/09 12:30:51 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
	this->_filename = filename;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this->_filename = other._filename;
	this->_data = other._data;
	this->_date = other._date;
	this->_day = other._day;
	this->_line = other._line;
	this->_month = other._month;
	this->_value = other._value;
	this->_year = other._year;
	return (*this);
}
BitcoinExchange::~BitcoinExchange(void){}

//Exceptions
const char	*BitcoinExchange::BadInputException::what(void) const throw()
{
	return ("Error: bad input => ");
}

const char	*BitcoinExchange::NotAPositiveNumberException::what(void) const throw()
{
	return ("Error: not a positive number.");
}

const char	*BitcoinExchange::TooLargeNumberException::what(void) const throw()
{
	return ("Error: too large a number.");
}

const char	*BitcoinExchange::BadValueException::what(void) const throw()
{
	return ("Error: bad value.");
}

const char	*BitcoinExchange::NoDataException::what(void) const throw()
{
	return ("No data available for that date.");
}

//Member Functions

void	BitcoinExchange::execute(void)
{
	readDataFile();
	//printMap();
	readInputFile();
}

void	BitcoinExchange::readDataFile(void)
{
	std::fstream	file;
	file.open("data.csv");
	if (!file.is_open())
	{
		std::cout << "Error: could not open the file." << std::endl;
		return ;
	}
	std::getline(file, this->_line);
	while (std::getline(file, this->_line))
		lineParse();
	file.close();
}

void	BitcoinExchange::lineParse(void)
{
	std::string	del = ",";
	std::string key = this->_line.substr(0, this->_line.find(del));
	std::string value = this->_line.erase(0, key.length() + del.length());

	this->_data.insert(std::pair<std::string, std::string>(key, value));
}

void	BitcoinExchange::printMap(void)
{
	for (std::map<std::string, std::string>::iterator it = this->_data.begin(); it  != this->_data.end(); ++it)
		std::cout << (*it).first << " => " << (*it).second << std::endl;
}

void	BitcoinExchange::dateStringToIntConverter(std::string key, int &day, int &month, int &year)
{
	size_t	pos = 0;
	int		ref = 0;
	std::string original = key;
	while ((pos = key.find("-")) != std::string::npos)
	{
		if (ref == 0)
			year = std::atoi(key.substr(0, pos).c_str());
		else if (ref == 1)
			month = std::atoi(key.substr(0, pos).c_str());
		ref++;
		key.erase(0, pos + 1);
	}
	day = std::atoi(key.c_str());
	if (!year || !month || !day)
	{
		this->_date = original;
		throw (BadInputException());
	}
}


bool	BitcoinExchange::isDateValid(void)
{
	std::string symbol = "-";
	if (this->_year < 0)
		throw (BadInputException());
	if (this->_month < 1 || this->_month > 12)
		throw (BadInputException());
	if (this->_day < 0 || this->_day > 31)
		throw (BadInputException());
	return (true);
}

bool	BitcoinExchange::isValueValid(std::string line)
{
	if (this->_value == 0 && line[0] != '0')
		throw (BadValueException());
	if (this->_value < 0)
		throw (NotAPositiveNumberException());
	if (this->_value > 1000)
		throw (TooLargeNumberException());
	return (true);
}

void	BitcoinExchange::readInputFile(void)
{
	std::ifstream inputFile;

	inputFile.open(this->_filename);
	std::string	line;
	std::string	del = "|";
	std::string	date;

	if (!inputFile.is_open())
	{
		std::cout << "Error: could not open the file." << std::endl;
		return ;
	}
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		if (line.length() == 0)
			continue;
		try{
			date = line.substr(0, line.find(del));
			line = line.erase(0, date.length() + 1 + 1);
			int i = 0;
			while (line[i] == ' ')
				line = line.erase(0, 1);
			dateStringToIntConverter(date, this->_day, this->_month, this->_year);
			this->_date = convertToDate();
			this->_value = std::atof(line.c_str());
			std::string tmp = numberToString(this->_value);
			isDateValid();
			isValueValid(line);
			if (line.length() < 1)
				throw (BadValueException());
			std::map<std::string, std::string>::iterator it;
			it = this->_data.find(this->_date);
			if (it == this->_data.end())
				findClosestDate(it);
			printInfo(this->_date, (*it).second);
		}catch(BadInputException &e){
			std::cerr << e.what() << this->_date << std::endl;
		}catch(NotAPositiveNumberException &e){
			std::cerr << e.what() << std::endl;
		}catch(TooLargeNumberException &e){
			std::cerr << e.what() << std::endl;
		}catch(BadValueException &e){
			std::cerr << e.what() << std::endl;
		}catch(NoDataException &e){
			std::cerr << e.what() << std::endl;
		}
	}
}

void	BitcoinExchange::printInfo(std::string date, std::string rate)
{
	std::cout << date << " => " << this->_value << " = " << this->_value * std::atof(rate.c_str()) << std::endl;
}

void	BitcoinExchange::findClosestDate(std::map<std::string, std::string>::iterator &it)
{
	--it;
	while (it != this->_data.begin())
	{
		if (isEarlierDate(it))
			break;
		--it;
	}
	if (it == this->_data.begin() && !isEarlierDate(it))
		throw (NoDataException());
}

bool	BitcoinExchange::isEarlierDate(std::map<std::string, std::string>::iterator &it)
{
	int	day;
	int	month;
	int	year;

	std::string date = (*it).first;
	dateStringToIntConverter(date, day, month, year);
	if (year < this->_year)
		return (true);
	if (year <= this->_year && month < this->_month)
		return (true);
	if (year <= this->_year && month <= this->_month && day < this->_day)
		return (true);
	return (false);
}

std::string	BitcoinExchange::convertToDate(void)
{
	std::string date;
	std::string	year;
	std::string	month;
	std::string	day;

	year = numberToString(this->_year);
	if (this->_month < 10)
		month = "0" + numberToString(this->_month);
	else
		month = numberToString(this->_month);
	if (this->_day < 10)
		day = "0" + numberToString(this->_day);
	else
		day = numberToString(this->_day);
	date = year + "-" + month + "-" + day;
	return (date);

}

std::string	BitcoinExchange::numberToString(int num)
{
	std::ostringstream	str;
	std::string			ret;
	str << num;
	ret = str.str();
	return (ret);
}
