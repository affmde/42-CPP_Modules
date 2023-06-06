/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/06 11:18:39 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : std::exception{
	public:
		const char	*what() const throw(){
			return "Value not found.";
		};
};

template <typename T>
typename T::iterator easyfind(T	&container, int n){
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw (NotFoundException());
	return (it);
}



#endif
