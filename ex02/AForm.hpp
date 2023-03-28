/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:53:34 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 21:04:42 by andrferr         ###   ########.fr       */
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
				const char *what(void) const throw(){
					return ("You have too high expectations. Maximum expectation is 1.");
				};
		};
		class	GradeTooLowException : std::exception {
			public:
				const char *what(void) const throw(){
					return ("Too low expectations. Please increase it to 150 at least.");
				};
		};

		//Member Functions
		std::string			getName(void) const;
		bool				getIsSigned(void) const;
		int					getReqSignGrade(void) const;
		int					getReqExecGrade(void) const;
		void				beSigned(Bureaucrat	&);
		virtual void		execute(Bureaucrat const & executor) = 0;

	protected:


	private:
		const std::string	name;
		bool				is_signed;
		const int			req_exec_grade;
		const int			req_sign_grade;

};

std::ostream	&operator<<(std::ostream &,Form const &f);

#endif