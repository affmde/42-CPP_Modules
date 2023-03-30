/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:31:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/30 10:27:18 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	/*Testing Shrubbery form execution*/
	// AForm *a;
	// std::string target = "Home";
	// a = new ShrubberyCreationForm(target);

	// Bureaucrat andre("Andre", 1);
	// andre.signForm(*a);
	// try
	// {
	// 	a->execute(andre);
	// }
	// catch(ShrubberyCreationForm::FormNotSigned &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete a;


	/*Testing RobotomyRequestForm*/
	std::string bTarget = "Robot machine Form";
	Bureaucrat andre("Andre", 1);
	AForm *b;

	b = new RobotomyRequestForm(bTarget);
	try
	{
		b->beSigned(andre);
		b->execute(andre);
	}
	catch(const RobotomyRequestForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const RobotomyRequestForm::FormNotSigned& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete b;
	return (0);
}
