/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:05:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:45:01 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern&);
		Intern	&operator=(const Intern&);
		~Intern(void);

		//Member Functions
		AForm	*makeForm(std::string form_name, std::string &target);

};


#endif
