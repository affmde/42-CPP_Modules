/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/20 10:02:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
	this->_filename = filename;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	this->_filename = other._filename;
}
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this->_filename = other._filename;
	return (*this);
}
BitcoinExchange::~BitcoinExchange(void){}


//Member Functions

void	BitcoinExchange::execute(void)
{
	readDataFile();
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
	while (std::getline(file, this->_line))
		lineParse();
	file.close();
}

void	BitcoinExchange::lineParse(void)
{
	std::string	del = ",";
	this->_date = this->_line.substr(0, this->_line.find(del));
	this->_line.erase(0, this->_date.length() + del.length());

	this->_data.insert(std::pair<std::string, std::string>(this->_date, this->_line));
	//std::cout << this->_date << "    " << this->_line << std::endl;
}

void	BitcoinExchange::printMap(void)
{
	for (std::multimap<std::string, std::string>::iterator it = this->_data.begin(); it  != this->_data.end(); ++it)
		std::cout << (*it).first << " => " << (*it).second << std::endl;
}

void	BitcoinExchange::dateStringToIntConverter(std::string key, int &day, int &month, int &year)
{
	size_t	pos = 0;
	int		ref = 0;
	while ((pos = key.find("-")) != std::string::npos)
	{
		if (ref == 0)
			year = std::atoi(key.substr(0, pos).c_str());
		else if (ref == 1)
			month = std::atoi(key.substr(0, pos).c_str());
		ref++;
		key = key.substr(pos + 1);
	}
	try{day = std::stoi(key);}catch(std::exception &e){day = -1;}
}


bool	BitcoinExchange::isDateValid(void)
{
	std::string symbol = "-";
	if (this->_year < 0)
	{
		this->message = "bad input => " + this->_date;
		return (false);
	}
	//std::cout << "month: " << this->_month << std::endl;
	if (this->_month < 1 || this->_month > 12)
	{
		this->message = "bad input => " + this->_date;
		return (false);
	}
	if (this->_day < 0 || this->_day > 31)
	{
		this->message = "bad input => " + this->_date;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::isValueValid(void)
{
	if (this->_value < 0)
	{
		this->message = "not a positive number.";
		return (false);
	}
	if (this->_value > 1000)
	{
		this->message = "too large a number.";
		return (false);
	}
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
		date = line.substr(0, line.find(del));
		line = line.erase(0, date.length() + 1 + 1);
		dateStringToIntConverter(date, this->_day, this->_month, this->_year);
		this->_date = convertToDate();
		this->_value = std::atof(line.c_str());
		if (!isDateValid() || !isValueValid())
		{
			std::cout << "Error: " << this->message << std::endl;
			continue;
		}
		std::multimap<std::string, std::string>::iterator it;
		it = this->_data.find(this->_date);
		if (it == this->_data.end())
			findClosestDate(it);
		printInfo(this->_date, (*it).second);
	}
}

void	BitcoinExchange::printInfo(std::string date, std::string rate)
{
	std::cout << date << " => " << this->_value << " = " << this->_value * std::atof(rate.c_str()) << std::endl;
}

void	BitcoinExchange::findClosestDate(std::multimap<std::string, std::string>::iterator &it)
{
	--it;
	while (it != this->_data.begin())
	{
		--it;
		if (isEarlierDate(it))
			break;
	}
}

bool	BitcoinExchange::isEarlierDate(std::multimap<std::string, std::string>::iterator &it)
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

	year = std::to_string(this->_year);
	if (this->_month < 10)
		month = "0" + std::to_string(this->_month);
	else
		month = std::to_string(this->_month);
	if (this->_day < 10)
		day = "0" + std::to_string(this->_day);
	else
		day = std::to_string(this->_day);
	date = year + "-" + month + "-" + day;
	return (date);
	
}