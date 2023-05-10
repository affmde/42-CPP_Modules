/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:42:21 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 14:56:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", other.getReqSignGrade(), other.getReqExecGrade())
{
	*this = other;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void){}


//Member Functions

void	RobotomyRequestForm::form_execute() const
{
	std::cout << "GRGRGRGRGRGRGRGRGR I am so noisy!!!" << std::endl;
	std::srand(time(0));
	int random = std::rand() % 100;
	if (random < 50)
		std::cout << this->target << " is informed that it has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " is informed that robotomization has failed" << std::endl;

}
