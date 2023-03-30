/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:38:20 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/30 11:14:24 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void){}


//Member Functions

void	PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getReqExecGrade())
		throw (GradeTooLowException());
	if (b.getGrade() > this->getReqExecGrade())
		throw(FormNotSigned());
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


