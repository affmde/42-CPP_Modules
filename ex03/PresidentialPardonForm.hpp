/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/30 11:14:20 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"


class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);


		//Exceptions
		class	FormNotSigned : public std::exception{
			public:
				const char	*what() const throw(){
					return ("Form was not graded yet");
				};
		};

		//Member Functions
		void	execute(Bureaucrat	const &) const;

	protected:


	private:
		std::string	target;

};

#endif
