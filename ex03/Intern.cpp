/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:08:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/30 11:59:47 by andrferr         ###   ########.fr       */
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


//Helper Functions

int	getTypeOfForm(std::string form_name)
{
	if (form_name.find("shrubbery") != std::string::npos)
	{
		std::cout << "Find shrubbery" << std::endl;
	}
	return (0);
}


//Member Functions

AForm	*Intern::makeForm(std::string form_name, std::string &target)
{
	AForm *newForm;
	getTypeOfForm(form_name);
	newForm = new ShrubberyCreationForm(target);
	return (newForm);
}
