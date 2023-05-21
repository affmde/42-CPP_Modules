/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/21 10:35:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>

class	RPN
{
	public:
		RPN(std::string);
		RPN(const RPN&);
		RPN	&operator=(const RPN&);
		~RPN(void);

		//Exceptions
		class	BadInputException : std::exception{
			public:
				const char	*what(void) const throw();
		};

		//Member Functions
		void	execute(void);
		
	private:
		std::string			_arg;
		int					_value;
		std::stack<int>		_stack;
		const std::string	_operands;

		//Member Functions
		bool	isArgValid(void);
		void	execution(void);
		int		calculate(int&, int&, char&);
		void	stackOperations(char);
};

#endif