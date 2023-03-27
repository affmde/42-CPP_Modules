/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/27 17:47:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucat default constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(int grade)
{
	std::cout << "Bureaucat Int constructor started" << std::endl;
	try
	{
		if (grade > 150)
			throw GradeToHighException();
		else if (grade < 1)
			throw GradeToLowException();
		else
			this->grade = grade;
	}
	catch(const Bureaucrat::GradeToHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeToLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

//Member Functions

int	Bureaucrat::getGrade(void)
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void)
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

