/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:31:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 17:03:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	/*testing a Form that exists*/
	AForm *newForm;
	Intern a;
	Bureaucrat andre("Andre", 5);
	std::string target = "home";
	newForm = a.makeForm("presidential pardon", target);
	if (!newForm)
		return (0);
	try{
		andre.signForm(*newForm);
		andre.executeForm(*newForm);
	} catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	} catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	delete newForm;

	/*testing a form that does not exist*/
	// AForm *newForm;
	// Intern a;
	// std::string target = "home";
	// Bureaucrat andre("Andre", 18);
	// newForm = a.makeForm("sdfghgsfsdfgh creation", target);
	// if (!newForm)
	// 	return (0);
	// try{
	// 	newForm->beSigned(andre);
	// 	andre.executeForm(*newForm);
	// } catch(AForm::GradeTooLowException &e){
	// 	std::cout << e.what() << std::endl;
	// } catch(AForm::FormNotSigned &e){
	// 	std::cout << e.what() << std::endl;
	// }
	// delete newForm;
	return (0);
}
