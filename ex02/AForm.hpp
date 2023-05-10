/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:53:34 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 15:10:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


#include <iostream>

class Bureaucrat;
#include "Bureaucrat.hpp"

class	AForm
{
	public:
		AForm(void);
		AForm(std::string name, int min_grade_sign, int req_grade_exec);
		AForm(const AForm&);
		AForm	&operator=(const AForm&);
		virtual ~AForm(void);

		class	GradeTooHighException : std::exception {
			public:
				const char *what(void) const throw();
		};
		class	GradeTooLowException : std::exception {
			public:
				const char *what(void) const throw();
		};
		class	FormNotSigned : std::exception{
			public:
				const char *what(void) const throw();
		};

		//Member Functions
		std::string			getName(void) const;
		bool				getIsSigned(void) const;
		int					getReqSignGrade(void) const;
		int					getReqExecGrade(void) const;
		void				beSigned(Bureaucrat	&);
		void				execute(Bureaucrat const & executor) const;

	protected:
		virtual void		form_execute(void) const = 0;


	private:
		const std::string	name;
		bool				is_signed;
		const int			req_exec_grade;
		const int			req_sign_grade;

};

std::ostream	&operator<<(std::ostream &,AForm const &f);

#endif
