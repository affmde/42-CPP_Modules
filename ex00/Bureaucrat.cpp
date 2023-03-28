/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 10:18:10 by andrferr         ###   ########.fr       */
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
	if (grade > 150)
		throw GradeToLowException();
	else if (grade < 1)
		throw GradeToHighException();
	else
		this->grade = grade;

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

