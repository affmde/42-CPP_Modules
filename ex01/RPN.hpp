/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/20 19:14:48 by andrferr         ###   ########.fr       */
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

		//Member Functions
		void	execute(void);
		
	private:
		std::string			_arg;
		int					_value;
		std::stack<int>		_stack;
		const std::string	_operands;
		std::string			_operators;

		//Member Functions
		void	parseArg(void);
		int		calculate(int&, int&, char&);
		void	execution(void);
};

#endif