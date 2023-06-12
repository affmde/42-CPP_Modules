/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:54 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/07 11:44:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::string arg;
	int	i = 0;
	while (++i < argc)
		arg += argv[i];
	RPN a(arg);
	a.execute();
	return (0);
}
