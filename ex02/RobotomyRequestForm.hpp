/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:34:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 16:17:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);

		//Exceptions
		class	FormNotSigned : std::exception{
			public:
				const char *what(void) const throw(){
					return ("Form is not signed yet");
				};
		};
		
		//Member Functions
		void	execute(Bureaucrat const &);

	protected:



	private:
		std::string target;

};


#endif
