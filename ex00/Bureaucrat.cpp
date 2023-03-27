/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:19:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/27 15:12:01 by andrferr         ###   ########.fr       */
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
			this->GradeToLowException();
		else if (grade < 1)
			this->GradeToLowException();
		else
			this->grade = grade;
	}
	catch(Bureaucrat &exception)
	{
		std::cout << exception.what() << std::endl;
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
		this->GradeToHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade >=150)
	{
		std::cout << "Here" << std::endl;
		this->GradeToLowException();
	}
	else
		this->grade++;
}

// const char	*Bureaucrat::what(void)
// {
// 	return ("Error: ");
// }

void	Bureaucrat::GradeToHighException(void)
{
	throw Bureaucrat();
}

void	Bureaucrat::GradeToLowException(void)
{
	throw Bureaucrat();
}
