/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 15:41:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Unknown")
{
	std::cout << "Bureaucat default constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucat Int constructor started" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;

}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignment called" << std::endl;
	*this = other;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignement operator called" << std::endl;
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

//Member Functions

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade >=150)
		throw GradeTooLowException();
	else
		this->grade++;
}


void	Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because ";
		if (this->getGrade() < form.getReqSignGrade())
			throw form::GradeTooHighException();
		else
			throw form::GradeTooLowException();
	}
}

//Overload Function

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
