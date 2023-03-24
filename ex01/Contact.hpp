/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:59:09 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/24 16:09:55 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	number;

	public:
		Contact(void);
		~Contact(void);

		//Member Functions
		void	setFirstName(std::string name);
		void	setLastname(std::string name);
		void	setNickname(std::string name);
		void	setSecret(std::string str);
		void	setNumber(std::string nbr);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getNumber(void);
		std::string	getSecret(void);
};

#endif
