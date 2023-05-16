/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:26:05 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 09:46:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T>>
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void){};
		MutantStack(const MutantStack&){};
		MutantStack	&operator=(const MutantStack&){};
		~MutantStack(void){};

		//Iterator
		typedef typename Container::iterator iterator;
		iterator	begin(void){
			return (this->c.begin());
		}
		iterator	end(void){
			return (this->c.end());
		}
};

#endif