/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:33:31 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 11:32:46 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{

}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free." << endl << "I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	string	possible_complains[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (possible_complains[i].compare(level) == 0)
		{
			fp = functions[i];
			(this->*fp)();
			break ;
		}
	}
}

void	Harl::filter(string level)
{
	int	n = -1;
	string	possible_complains[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (possible_complains[i].compare(level) == 0)
		{
			n = i;
			break ;
		}
	}
	switch(n)
	{
		case 0:
			cout << "[ DEBUG ]" << endl;
			this->complain("DEBUG");
			cout << endl;
		case 1:
			cout << "[ INFO ]" << endl;
			this->complain("INFO");
			cout << endl;
		case 2:
			cout << "[ WARNING ]" << endl;
			this->complain("WARNING");
			cout << endl;
		case 3:
			cout << "[ ERROR ]" << endl;
			this->complain("ERROR");
			cout << endl;
			break ;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
