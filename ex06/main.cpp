/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:53:47 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/14 11:40:26 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		return (0);
	}
	if (argc > 2)
	{
		cout << "Too much arguments. Sorry but i'm quite dumb to understand so much info." << endl;
		return (0);
	}
	Harl harl;
	harl.filter(argv[1]);
	(void)argv;
	return (0);
}
