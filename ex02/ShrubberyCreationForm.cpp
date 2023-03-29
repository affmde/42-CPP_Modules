/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:12:08 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 13:33:47 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : AForm("ShruberryCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("STILL CHANGE THIS NAME", other.getReqSignGrade(), other.getReqExecGrade())
{
	*this = other;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->target = other.target;
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

//Member Functions

void	ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	if (this->getIsSigned() == false)
		throw (FormNotSigned());
	if (b.getGrade() > this->getReqExecGrade())
		throw (GradeTooLowException());
	//Change this to print trees!!!!!
	std::cout << "Yes form " << this->getName() << " is executing by " << b.getName() << std::endl;
	std::ofstream	outfile;
	outfile.open(this->target + "_shrubbery");
	if (outfile.is_open())
	{
		outfile << "     *     " << std::endl;
		outfile << "    ***    " << std::endl;
		outfile << "   *****   " << std::endl;
		outfile << "  *******  " << std::endl;
		outfile << " ********* " << std::endl;
		outfile << "***********" << std::endl;
		outfile << "     *     " << std::endl;
		outfile << "     *     " << std::endl;
		outfile << "------------" << std::endl;
		outfile.close();
	}

}
