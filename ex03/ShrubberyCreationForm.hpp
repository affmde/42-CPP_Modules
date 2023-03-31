/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:51:06 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/31 10:35:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);
		~ShrubberyCreationForm(void);


		//Exceptions
		// class	FormNotSigned : std::exception{
		// 	public:
		// 		const char *what(void) const throw(){
		// 			return ("Form is not signed yet");
		// 		};
		// };

		//Member Functions
		void	execute(Bureaucrat const & executor) const;

	protected:


	private:
		std::string target;


};


#endif
