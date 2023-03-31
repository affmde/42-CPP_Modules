/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:31:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/31 10:47:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	AForm *newForm;
	Intern a;
	Bureaucrat andre("Andre", 1);
	std::string target = "home";
	newForm = a.makeForm("RobotomyRequestForm", target);
	try{
		newForm->beSigned(andre);
		andre.executeForm(*newForm);
	} catch(AForm::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	} catch(AForm::FormNotSigned &e){
		std::cout << e.what() << std::endl;
	}
	delete newForm;
	return (0);
}
