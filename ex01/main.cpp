/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:17:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 14:25:15 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	/*Test changing form signed status*/
	// Bureaucrat andre("Andre", 5);
	// Form a;

	// std::cout << a.getIsSigned() << std::endl;
	// std::cout << a.getReqSignGrade() << std::endl;
	// try
	// {
	// 	a.beSigned(andre);
	// }
	// catch(Form::GradeTooHighException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Form::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << a.getIsSigned() << std::endl;


	/*Testing the << operand overator*/
	// Form a;
	// std::cout << a << std::endl;


	/*Testing copy constructor*/
	// Form a;
	// Bureaucrat bu;
	// Form b(a);
	// std::cout << a.getReqExecGrade() << std::endl;
	// std::cout << b.getReqExecGrade() << std::endl;
	// try
	// {
	// 	a.beSigned(bu);
	// }
	// catch(const Form::GradeTooHighException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(const Form::GradeTooLowException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << a.getIsSigned() << std::endl;
	// std::cout << b.getIsSigned() << std::endl;


	/*Testing bad constructor values*/
	try
	{
		Form a("New assignment", 20, 0);
		std::cout << a.getReqSignGrade() << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	/*Testing bureaucrat sign form*/
	// Bureaucrat andre("Andre", 2);
	// try
	// {
	// 	Form a("Sign football player", 3, 1);
	// 	std::cout << "Form: " << a.getName() << " signed status: " << a.getIsSigned() << std::endl;
	// 	andre.signForm(a);
	// 	std::cout << "Form: " << a.getName() << " signed status: " << a.getIsSigned() << std::endl;
	// }
	// catch(Form::GradeTooHighException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Form::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (0);
}
