/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:17:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/24 16:04:53 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		//Member Functions
		void	Menu(void);

	private:
		void	newContactMenu(void);
		void	search(void);
		void	displayContact(int index);
		void	add(Contact contact);
		int		index;
		Contact	contacts[8];
};

#endif
