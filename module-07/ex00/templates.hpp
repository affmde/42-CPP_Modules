/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:44:36 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/15 12:01:27 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>

void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const	&min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	return (b >= a ? b : a);
}

#endif