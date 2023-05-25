/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:59:18 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/25 17:17:01 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
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
		std::string			_sortedArg;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		int					_nbrElements;
		unsigned long		_vectorStartTime;
		unsigned long		_vectorEndTime;
		unsigned long		_dequeStartTime;
		unsigned long		_dequeEndTime;

		//Member Functions
		void			handleVector(void);
		void			handleDeque(void);
		void			printOutput(void);
		void			populateVector(void);
		void			populateDeque(void);
		bool			isArgValid(void);
		unsigned long	getTime();
		void			vectorInsertMergeSort(int start, int end);
		void			vectorMerge(int start, int middle, int end);
		void			vectorInsert(int start, int end);
		void			dequeInsertMergeSort(int start, int end);
		void			dequeMerge(int start, int middle, int end);
		void			dequeInsert(int start, int end);
};

#endif
