/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:11:22 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/15 12:36:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, unsigned int length, void (*f)(T&))
{
	unsigned int	i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}

template <typename T>
void	multiplyByTwo(T &n)
{
	n *= 2;
}
template<typename T>
void	toUpperCase(T &n)
{
		if (n >= 97 && n <= 122)
			n -= 32;
}

#endif