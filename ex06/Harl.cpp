/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:33:31 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:19:13 by andrferr         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	possible_complains[4] = {
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

void	Harl::filter(std::string level)
{
	int	n = -1;
	std::string	possible_complains[4] = {
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
			std::cout << "[ DEBUG ]" << std::endl;
			this->complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
