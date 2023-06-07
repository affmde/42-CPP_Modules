/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:55:02 by andrferr          #+#    #+#             */
/*   Updated: 2023/06/06 10:38:15 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class	Span
{
	public:
		Span(unsigned int);
		Span(const Span&);
		Span	&operator=(const Span&);
		~Span(void);

		//Member Functions
		void			addNumber(int);
		void			addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		//Exceptions
		class SpanFullException : std::exception{
			public:
				const char	*what() const throw();
		};
		class NotEnoughElementsExceptions : std::exception{
			public:
				const char	*what() const throw();
		};

	private:
		unsigned int		_max;
		std::vector<int>	_elements;
};

#endif
