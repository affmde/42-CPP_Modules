/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:53:47 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 19:58:37 by andrferr         ###   ########.fr       */
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
		return (0);
	Harl harl;
	
	return (0);
}
