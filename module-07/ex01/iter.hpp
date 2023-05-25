/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:11:22 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/22 14:05:21 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, unsigned int length, void (*f)(T const &))
{
	unsigned int	i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}

template <typename T>
void	display(T const &n)
{
	std::cout << n;
}


#endif
