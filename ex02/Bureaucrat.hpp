/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:18:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 14:59:01 by andrferr         ###   ########.fr       */
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
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat(std::string name, int grade);
		Bureaucrat	&operator=(const Bureaucrat&);
		~Bureaucrat(void);


		//Member Functions
		int					getGrade(void) const;
		std::string			getName(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(AForm &);
		void				executeForm(AForm const &);

		//Exceptons
		class	GradeTooHighException : std::exception{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : std::exception{
			public:
				virtual const char	*what(void) const throw();
		};

	protected:


	private:
		const std::string	name;
		int					grade;
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &b);

#endif
