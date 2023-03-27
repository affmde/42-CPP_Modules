/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:18:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/27 15:08:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class	Bureaucrat : public std::exception
{
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		virtual ~Bureaucrat() throw() {return ;}

		//Member Functions
		int					getGrade(void);
		std::string			getName(void);
		void				incrementGrade(void);
		void				decrementGrade(void);
		virtual const char	*what(void) const throw(){
			return ("Error: ");
		}

	protected:


	private:
		const std::string	name;
		int					grade;
		void				GradeToHighException(void);
		void				GradeToLowException(void);


};


#endif
