/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:26 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 16:15:12 by andrferr         ###   ########.fr       */
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
	readFile();
}

void	BitcoinExchange::readFile(void)
{
	std::fstream	file;
	file.open(this->_filename);
	if (!file.is_open())
	{
		std::cout << "Error: could not open the file." << std::endl;
		return ;
	}
	while (std::getline(file, this->_line))
	{
		std::cout << _line << std::endl;
	}
	file.close();
}

