/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:31 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/08 14:32:17 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ToUppercase(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

void	StrToUppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ToUppercase(&str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		StrToUppercase(argv[i]);
		std::cout << argv[i] << (i == argc - 1 ? "" : " ");
		i++;
	}
	std::cout << std::endl;
	return (0);
}
