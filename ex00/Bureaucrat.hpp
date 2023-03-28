/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:18:37 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/28 10:12:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);


		//Member Functions
		int					getGrade(void);
		std::string			getName(void);
		void				incrementGrade(void);
		void				decrementGrade(void);

		class	GradeToHighException : std::exception{
			public:
				virtual const char	*what(void) const throw(){
					return ("Error: You need to lower your expectations. You are too confidente now. Maximum accepted is 1");
				}
		};
		class	GradeToLowException : std::exception{
			public:
				virtual const char	*what(void) const throw(){
					return ("Error: Dont be so humble. You can increase your expectations. Increase it to a minimum of 150");
				}
		};

	protected:


	private:
		const std::string	name;
		int					grade;
};


#endif
