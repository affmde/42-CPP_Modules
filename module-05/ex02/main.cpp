/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:31:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 15:16:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	/*Testing Shrubbery form execution*/
	// {AForm *a;
	// std::string target = "Home";
	// a = new ShrubberyCreationForm(target);

	// try
	// {
	// 	Bureaucrat andre("Andre", 180);
	// 	andre.signForm(*a);
	// 	andre.executeForm(*a);
	// }
	// catch(AForm::FormNotSigned &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(AForm::GradeTooHighException &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(AForm::GradeTooLowException &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooHighException &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::GradeTooLowException &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// delete a;}


	/*Testing RobotomyRequestForm*/
	// {std::string bTarget = "Robot machine Form";
	// Bureaucrat andre("Andre", 1);
	// AForm *b;

	// b = new RobotomyRequestForm(bTarget);
	// try
	// {
	// 	b->beSigned(andre);
	// 	b->execute(andre);
	// }
	// catch(const RobotomyRequestForm::GradeTooLowException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// catch(const RobotomyRequestForm::FormNotSigned& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// delete b;}


	/*Testing PresidentialPardonForm*/
	// {std::string target = "President Asshole";
	// Bureaucrat andre("Andre", 1);
	// AForm	*a = new PresidentialPardonForm(target);
	// try
	// {
	// 	a->execute(andre);
	// }
	// catch(const PresidentialPardonForm::GradeTooLowException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// catch(const PresidentialPardonForm::FormNotSigned& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// delete a;}
	// return (0);

	/*Testing Assignment operator*/
	{
		std::string target = "President Asshole";
		try{
			AForm *a = new PresidentialPardonForm(target);
			Bureaucrat andre("Andre", 1);
			andre.signForm(*a);
			std::cout << *a << std::endl;
			AForm *b = a;
			std::cout << *b << std::endl;

		}catch(const PresidentialPardonForm::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const PresidentialPardonForm::FormNotSigned& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
