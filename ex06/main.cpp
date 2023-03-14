/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:53:47 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 17:17:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "Too much arguments. Sorry but i'm quite dumb to understand so much info." << std::endl;
		return (0);
	}
	Harl harl;
	harl.filter(argv[1]);
	return (0);
}
