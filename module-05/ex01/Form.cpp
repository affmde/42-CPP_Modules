/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:40:28 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:53:25 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int min_grade_sign, int min_grade_exec) : name(name), req_exec_grade(min_grade_exec), req_sign_grade(min_grade_sign)
{
	std::cout << "Form variables constructor called" << std::endl;
	if (min_grade_exec > 150 || min_grade_sign > 150)
		throw (GradeTooLowException());
	if (min_grade_exec < 1 || min_grade_sign < 1)
		throw (GradeTooHighException());
	this->is_signed = false;
}

Form::Form(const Form &other) : name(other.getName()), req_exec_grade(other.getReqExecGrade()), req_sign_grade(other.getReqSignGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = other;
}

Form	&Form::operator=(const Form &other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	this->is_signed = other.getIsSigned();
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

//Exceptions

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("You have too high expectations. Maximum expectation is 1.");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Too low expectations. Please increase it to 150 at least.");
}


//Member Functions

std::string	Form::getName(void) const
{
	return (this->name);
}

bool		Form::getIsSigned(void) const
{
	return (this->is_signed);
}

int			Form::getReqExecGrade(void) const
{
	return (this->req_exec_grade);
}

int			Form::getReqSignGrade(void) const
{
	return (this->req_sign_grade);
}

void		Form::beSigned(Bureaucrat &b)
{
	if (this->getIsSigned() == false)
	{
		if (b.getGrade() > this->getReqSignGrade())
			throw (GradeTooLowException());
		this->is_signed = true;
	}
}


//Operand << overload

std::ostream	&operator<<(std::ostream &os, Form const &f)
{
	os << "Name: " << f.getName() << std::endl;
	os << "Is signed: " << f.getIsSigned() << std::endl;
	os << "Required grade to sign: " << f.getReqSignGrade() << std::endl;
	os << "Required grade to execute: " << f.getReqExecGrade();
	return (os);
}
