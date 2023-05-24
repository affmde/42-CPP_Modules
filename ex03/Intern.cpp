/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:08:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 16:52:10 by andrferr         ###   ########.fr       */
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
	return (*this);
}

Intern::~Intern(void){}

//Helper functions
typedef AForm	*(*AForm_function)(std::string);
AForm	*new_s(std::string target){return (new ShrubberyCreationForm(target));};
AForm	*new_p(std::string target){return (new PresidentialPardonForm(target));};
AForm	*new_r(std::string target){return (new RobotomyRequestForm(target));};

//Member Functions

AForm	*Intern::makeForm(std::string form_name, std::string &target)
{
	std::string possible_forms[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm_function functions[] ={
		new_s,
		new_r,
		new_p
	};
	for (int i = 0; i < 3; i++)
		if (!possible_forms[i].compare(form_name))
		{
			std::cout << "Intern creates " << possible_forms[i] << std::endl;
			return (functions[i](target));
		}
	std::cout << "Intern couldn't create form because " << form_name << " is not recognized." << std::endl;
	return (NULL);
}
