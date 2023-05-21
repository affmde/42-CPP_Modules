/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:34 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/21 11:15:38 by andrferr         ###   ########.fr       */
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
const char	*RPN::BadInputException::what(void) const throw(){
	return ("Error");
}

//Member Functions

void	RPN::execute(void)
{
	try{
		isArgValid();
		execution();
	} catch(BadInputException &e){
		std::cout << e.what() << std::endl;
	}
}

void	RPN::execution(void)
{
	std::string	expression;
	std::string	operand;
	size_t		pos;
	
	int	i = 0;
	while (i < (int)this->_arg.length())
	{
		if (std::isdigit(this->_arg[i]))
			this->_stack.push(this->_arg[i] - '0');
		else if ((pos = this->_operands.find(this->_arg[i])) != std::string::npos)
			stackOperations(this->_arg[i]);
		i++;
	}
	std::cout << this->_stack.top() << std::endl;
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

void	RPN::stackOperations(char c)
{
	int	a;
	int	b;
	int	result;

	if (this->_stack.size() < 2)
		throw (BadInputException());
	b = this->_stack.top();
	this->_stack.pop();
	a = this->_stack.top();
	this->_stack.pop();
	result = calculate(a, b, c);
	this->_stack.push(result);
}

bool	RPN::isArgValid(void)
{
	int	i = 0;
	int	len = this->_arg.length();

	while (i < len)
	{
		if (this->_arg[i] != '+' && this->_arg[i] != '-' && this->_arg[i] != '*' && this->_arg[i] != '/' && 
			this->_arg[i] != ' ' && !std::isdigit(this->_arg[i]))
			throw (BadInputException());
		i++;
	}
	return (true);
}