/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:29:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:53:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;
#include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(std::string name, int min_grade_sign, int req_grade_exec);
		Form(const Form&);
		Form	&operator=(const Form&);
		~Form(void);

		class	GradeTooHighException : std::exception {
			public:
				const char *what(void) const throw();
		};
		class	GradeTooLowException : std::exception {
			public:
				const char *what(void) const throw();
		};

		//Member Functions
		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getReqSignGrade(void) const;
		int			getReqExecGrade(void) const;
		void		beSigned(Bureaucrat	&);

	private:
		const std::string	name;
		bool				is_signed;
		const int			req_exec_grade;
		const int			req_sign_grade;

};

std::ostream	&operator<<(std::ostream &,Form const &f);

#endif
