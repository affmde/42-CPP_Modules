/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:18:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/16 14:55:43 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class AForm;
#include "AForm.hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat	&operator=(const Bureaucrat&);
		~Bureaucrat(void);


		//Member Functions
		int					getGrade(void) const;
		std::string			getName(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(AForm &);
		void				executeForm(AForm const &);

		class	GradeTooHighException : std::exception{
			public:
				virtual const char	*what(void) const throw(){
					return ("Error: You need to lower your expectations. You are too confidente now. Maximum accepted is 1");
				}
		};
		class	GradeTooLowException : std::exception{
			public:
				virtual const char	*what(void) const throw(){
					return ("Error: Dont be so humble. You can increase your expectations. Increase it to a minimum of 150");
				}
		};

	private:
		const std::string	name;
		int					grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b);

#endif
