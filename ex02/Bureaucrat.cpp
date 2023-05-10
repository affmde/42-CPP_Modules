/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 15:07:37 by andrferr         ###   ########.fr       */
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

//Exceptions
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: You need to lower your expectations. You are too confidente now. Maximum accepted is 1");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Dont be so humble. You can increase your expectations. Increase it to a minimum of 150");
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


void	Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " couldn't sign " << form.getName() << " because it was already signed" << std::endl;
	else
	{
		if (this->getGrade() > form.getReqSignGrade())
			std::cout << this->name << " couldn't sign " << form.getName() << " because doesn't have an enough grade for it" << std::endl;
		else
		{
			form.beSigned(*this);
			std::cout << this->name << " signed " << form.getName() << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

}

//Overload Function

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
