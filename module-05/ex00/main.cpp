/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:17:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:51:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	/*Testing the increase function exception*/
	try
	{
		Bureaucrat a("Andre", 1);
		a.incrementGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	/*Testing the decrese exception*/
	try
	{
		Bureaucrat a("Andre",150);
		a.decrementGrade();
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}



	/*Testing bad value at construction*/
	try
	{
		Bureaucrat a("Andre", 0);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("Andre", 170);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}


	/*Testing << operator overload*/
	try
	{
		Bureaucrat a("Andre", 120);
		std::cout << a << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}



	return (0);
}
