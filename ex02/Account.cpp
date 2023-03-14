/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:03 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:01:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t t = std::time(0);
	tm		*now = localtime(&t);
	std::cout << "[";
	std::cout << now->tm_year + 1900;
	if (now->tm_mon < 10)
		std::cout << '0' << now->tm_mon;
	else
		std::cout << now->tm_mon;
	if (now->tm_mday < 10)
		std::cout << "0" << now->tm_mday;
	else
		std::cout << now->tm_mday;
	std::cout << "_";
	if (now->tm_hour < 10)
		std::cout << "0" << now->tm_hour;
	else
		std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0" << now->tm_min;
	else
		std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0" << now->tm_sec;
	else
		std::cout << now->tm_sec;
	std::cout << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
 }

bool	Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawl >= 0)
	{
		std::cout << "withdrawal:" << withdrawl << ";";
		_totalAmount -= withdrawl;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		this->_amount -= withdrawl;
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount(void) const
{
	return (Account::getTotalAmount());
}



void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbDeposits);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawls:" << getNbWithdrawals() << std::endl;
}
