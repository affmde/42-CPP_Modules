/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:35:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/10 14:56:36 by andrferr         ###   ########.fr       */
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

		//Member Functions
		void	form_execute(void) const;

	protected:


	private:
		std::string	target;

};

#endif
