/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/17 17:30:19 by andrferr         ###   ########.fr       */
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
}

void	BitcoinExchange::printMap(void)
{
	for (std::multimap<std::string, std::string>::iterator it = this->_data.begin(); it  != this->_data.end(); ++it)
		std::cout << (*it).first << " => " << (*it).second << std::endl;
}

void	BitcoinExchange::getDateValues(std::string &key)
{
	size_t	pos = 0;
	int		ref = 0;
	while ((pos = key.find("-")) != std::string::npos)
	{
		if (ref == 0)
			this->_year = std::atoi(key.substr(0, pos).c_str());
		else if (ref == 1)
			this->_month = std::atoi(key.substr(0, pos).c_str());
		ref++;
		key.erase(0, key.find("-") + 1);
	}
	this->_day = std::atoi(key.c_str());
	this->_value = std::atol(this->_line.c_str());
}


bool	BitcoinExchange::isLineValid(void)
{
	std::string symbol = "-";
	if (this->_year < 0)
	{
		this->message = "wrong input => " + this->_date;
		return (false);
	}
	if (this->_month < 1 || this->_month > 12)
		return (false);
	if (this->_day < 0 || this->_day > 31)
		return (false);
	if (this->_value < 0)
	{
		this->message = "not a positive number.";
		return (false);
	}
	if (this->_value > 1000)
	{
		this->message = "Error: too large a number.";
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
	while (std::getline(inputFile, line))
	{
		date = line.substr(0, line.find(del));
		line = line.erase(0, date.length() + 1);
		std::multimap<std::string, std::string>::iterator it;
		it = this->_data.find(date);
		//if (it != this->_data.end())
			std::cout << (*it).first << std::endl;
	}
}
