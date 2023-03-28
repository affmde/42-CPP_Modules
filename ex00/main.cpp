/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:17:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 10:21:22 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	/*Testing the increase function exception*/
	// try
	// {
	// 	Bureaucrat a(1);
	// 	a.incrementGrade();
	// }
	// catch(const Bureaucrat::GradeToHighException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	/*Testing the decrese exception*/
	// try
	// {
	// 	Bureaucrat a(150);
	// 	a.decrementGrade();
	// }
	// catch(const Bureaucrat::GradeToLowException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }



	/*Testing bad value at construction*/
	try
	{
		Bureaucrat(0);
	}
	catch(const Bureaucrat::GradeToLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeToHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat(170);
	}
	catch(const Bureaucrat::GradeToLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeToHighException& e)
	{
		std::cout << e.what() << std::endl;
	}



	return (0);
}
