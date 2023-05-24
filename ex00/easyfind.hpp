/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:52:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/24 10:20:39 by andrferr         ###   ########.fr       */
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
	typename T::iterator	it;
	typename T::iterator	end;

	end = container.end();
	it = std::find(container.begin(), end, n);
	if (it != end)
		return (it);
	throw (NotFoundException());
}



#endif
