/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:34:33 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 14:56:27 by andrferr         ###   ########.fr       */
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

		//Member Functions
		void	form_execute(void) const;

	protected:



	private:
		std::string target;

};


#endif
