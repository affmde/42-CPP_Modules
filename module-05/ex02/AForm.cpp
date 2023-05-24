/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:55:41 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:55:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int min_grade_sign, int min_grade_exec) : name(name), req_exec_grade(min_grade_exec), req_sign_grade(min_grade_sign)
{
	std::cout << "AForm variables constructor called" << std::endl;
	if (min_grade_exec > 150 || min_grade_sign > 150)
		throw (GradeTooLowException());
	if (min_grade_exec < 1 || min_grade_sign < 1)
		throw (GradeTooHighException());
	this->is_signed = false;
}

AForm::AForm(const AForm &other) : name(other.getName()), req_exec_grade(other.getReqExecGrade()), req_sign_grade(other.getReqSignGrade())
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = other;
}

AForm	&AForm::operator=(const AForm &other)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	this->is_signed = other.getIsSigned();
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

//Excceptions

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Error: Too high exception.");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Error: Too low exception.");
}

const char	*AForm::FormNotSigned::what() const throw()
{
	return ("Error: Form is not signed yet");
}

//Member Functions

std::string	AForm::getName(void) const
{
	return (this->name);
}

bool		AForm::getIsSigned(void) const
{
	return (this->is_signed);
}

int			AForm::getReqExecGrade(void) const
{
	return (this->req_exec_grade);
}

int			AForm::getReqSignGrade(void) const
{
	return (this->req_sign_grade);
}

void		AForm::beSigned(Bureaucrat &b)
{
	if (this->getIsSigned() == false)
	{
		if (b.getGrade() > this->getReqSignGrade())
			throw (GradeTooLowException());
		this->is_signed = true;
	}
}

void		AForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw (FormNotSigned());
	if (executor.getGrade() > this->getReqExecGrade())
		throw (GradeTooLowException());
	form_execute();
}


//Operand << overload

std::ostream	&operator<<(std::ostream &os, AForm const &f)
{
	os << "Name: " << f.getName() << std::endl;
	os << "Is signed: " << f.getIsSigned() << std::endl;
	os << "Required grade to sign: " << f.getReqSignGrade() << std::endl;
	os << "Required grade to execute: " << f.getReqExecGrade();
	return (os);
}
