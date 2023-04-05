/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:08:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/04/05 14:23:31 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	// *this = other;
	return (*this);
}

Intern::~Intern(void){}

//Member Functions

AForm	*Intern::makeForm(std::string form_name, std::string &target)
{
	std::string possible_forms[] = {
		"Shrubbery creation",
		"Robotomy request",
		"Presidential pardon"
	};

	//void	(Intern::*functions[])(std::string) = {};
	AForm	*forms[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	int	val = -1;
	for (int i = 0; i < 3; i++)
		val = !possible_forms[i].compare(form_name) ? i : val;
	AForm *new_form = NULL;
	if (val >= 0 && val <= 2)
	{
		new_form = forms[val];
		std::cout << "Intern creates " << new_form->getName() << std::endl;
	}
	else
		std::cout << "Intern couln't create form. " << form_name << " is not recognized" << std::endl;
	for(int i = 0; i < 3; i++)
			if (i != val)
				delete forms[i];
	return (new_form);


	// switch(val)
	// {
	// 	case 0:
	// 		new_form = new ShrubberyCreationForm(target);
	// 		std::cout << "Intern creates " << new_form->getName() << std::endl;
	// 		break;
	// 	case 1:
	// 		new_form  = new RobotomyRequestForm(target);
	// 		std::cout << "Intern creates " << new_form->getName() << std::endl;
	// 		break;
	// 	case 2:
	// 		new_form = new PresidentialPardonForm(target);
	// 		std::cout << "Intern creates " << new_form->getName() << std::endl;
	// 		break;
	// 	default:
	// 		std::cout << "Intern couln't create form. " << form_name << " is not recognized" << std::endl;
	// }
}
