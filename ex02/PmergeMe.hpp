/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:59:18 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/21 11:27:13 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class	PmergeMe
{
	public:
		PmergeMe(int, char**);
		PmergeMe(const PmergeMe&);
		PmergeMe	&operator=(const PmergeMe&);
		~PmergeMe(void);

		//Member Functions
		void	execute(void);
	private:
		std::string			_arg;
		std::vector<int>	_vector;
		std::list<int>		_list;
};

#endif