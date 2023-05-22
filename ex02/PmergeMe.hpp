/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:59:18 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/22 16:34:29 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sys/time.h>

class	PmergeMe
{
	public:
		PmergeMe(int, char**);
		PmergeMe(const PmergeMe&);
		PmergeMe	&operator=(const PmergeMe&);
		~PmergeMe(void);

		//Exceptions
		class BadInputException : std::exception{
			public:
				const char	*what(void) const throw();
		};

		//Member Functions
		void	execute(void);

	private:
		std::string			_arg;
		std::vector<int>	_vector;
		std::list<int>		_list;
		int					_nbrElements;
		timeval				_vectorStartTime;
		timeval				_vectorEndTime;
		timeval				_listStartTime;
		timeval				_listEndTime;

		//Member Functions
		bool	isArgValid(void);
		void	assignValueToContainers(void);
		void	sortVector(void);
		void	sortList(void);

};

#endif
