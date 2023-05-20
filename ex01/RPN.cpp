/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:34 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/20 19:23:45 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string str) : _operands("+-/*")
{
	this->_arg = str;
}

RPN::RPN(const RPN &other) : _operands("+-/*")
{
	*this = other;
}

RPN	&RPN::operator=(const RPN &other)
{
	this->_arg = other._arg;
	this->_value = other._value;
	this->_stack = other._stack;
	return (*this);
}

RPN::~RPN(void){}

//Exceptions


//Member Functions

void	RPN::execute(void)
{
	parseArg();
	execution();
}

void	RPN::parseArg(void)
{
	std::string	expression;
	std::string	operand;
	size_t		pos;
	
	int	i = this->_arg.length() - 1;
	while (i >= 0)
	{
		if (std::isdigit(this->_arg[i]))
			this->_stack.push(this->_arg[i] - '0');
		i--;
	}
	while (i < (int)this->_arg.length())
	{
		if ((pos = this->_operands.find(this->_arg[i])) != std::string::npos)
			this->_operators += this->_arg[i];
		i++;
	}
}

int	RPN::calculate(int &a, int&b, char &c)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '/')
		return (a / b);
	else
		return (a * b);
}

void	RPN::execution(void)
{
	int	i = 0;
	int	a = this->_stack.top();
	this->_stack.pop();
	int	b = this->_stack.top();
	this->_stack.pop();
	this->_value = calculate(a, b, this->_operators[i]);
	i++;
	std::cout << "a: " << a << " b: " << b << " total: " << this->_value << std::endl;
	while (!this->_stack.empty())
	{
		a = this->_value;
		b = this->_stack.top();
		this->_stack.pop();
		this->_value = calculate(a, b, this->_operators[i]);
		std::cout << "a: " << a << " b: " << b << " total: " << this->_value << std::endl;
		i++;
	}
	std::cout << this->_value << std::endl;
}