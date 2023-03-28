/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 10:56:13 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Unknown")
{
	std::cout << "Bureaucat default constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(int grade) : name("Unknown")
{
	std::cout << "Bureaucat Int constructor started" << std::endl;
	if (grade > 150)
		throw GradeToLowException();
	else if (grade < 1)
		throw GradeToHighException();
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
	//this->name = other.name;
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
		throw GradeToHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade >=150)
		throw GradeToLowException();
	else
		this->grade++;
}


//Overload Function

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
