/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:03 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/09 18:31:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

using namespace std;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
}

Account::Account(void)
{

}

void	Account::_displayTimestamp(void)
{
	time_t t = std::time(0);
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawl)
{
	this->_totalAmount -= withdrawl;
	this->_totalNbWithdrawals++;
	return (true);
}

int		checkAmount( void )
{
	return (Account::getTotalAmount());
}



void	displayStatus( void )
{

}

int	Account::getNbAccounts( void )
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

}
