/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:17:15 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/24 12:18:42 by andrferr         ###   ########.fr       */
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
		void	NewContactMenu(void);
		void	Search(void);
		void	DisplayContact(int index);
		void	Add(Contact contact);
		int		index;
		Contact	contacts[8];
};

#endif
