/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:59:18 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/25 10:04:31 by andrferr         ###   ########.fr       */
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
		std::string			_sortedArg;
		std::vector<int>	_vector;
		std::list<int>		_list;
		int					_nbrElements;
		unsigned long		_vectorStartTime;
		unsigned long		_vectorEndTime;
		unsigned long		_listStartTime;
		unsigned long		_listEndTime;

		//Member Functions
		void			handleVector(void);
		void			handleList(void);
		void			printOutput(void);
		void			populateVector(void);
		void			populateList(void);
		bool			isArgValid(void);
		void			sortVector(void);
		void			sortList(void);
		unsigned long	getTime();

};

#endif
