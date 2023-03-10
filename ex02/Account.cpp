/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:03 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 12:13:45 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

using namespace std;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "created" << endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "closed" << endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t t = std::time(0);
	tm		*now = localtime(&t);
	cout << "[";
	cout << now->tm_year + 1900;
	if (now->tm_mon < 10)
		cout << '0' << now->tm_mon;
	else
		cout << now->tm_mon;
	if (now->tm_mday < 10)
		cout << "0" << now->tm_mday;
	else
		cout << now->tm_mday;
	cout << "_";
	if (now->tm_hour < 10)
		cout << "0" << now->tm_hour;
	else
		cout << now->tm_hour;
	if (now->tm_min < 10)
		cout << "0" << now->tm_min;
	else
		cout << now->tm_min;
	if (now->tm_sec < 10)
		cout << "0" << now->tm_sec;
	else
		cout << now->tm_sec;
	cout << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	cout << "deposit:" << deposit << ";";
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	cout << "amount:" << _amount << ";";
	cout << "nb_deposits:" << _nbDeposits << endl;
 }

bool	Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawl >= 0)
	{
		cout << "withdrawal:" << withdrawl << ";";
		_totalAmount -= withdrawl;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		this->_amount -= withdrawl;
		cout << "amount:" << _amount << ";";
		cout << "nb_withdrawals:" << _nbWithdrawals << endl;
		return (true);
	}
	cout << "withdrawal:refused" << endl;
	return (false);
}

int		Account::checkAmount(void) const
{
	return (Account::getTotalAmount());
}



void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << endl;
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
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawls:" << getNbWithdrawals() << endl;
}
