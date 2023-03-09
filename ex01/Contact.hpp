/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:59:09 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/09 16:42:10 by andrferr         ###   ########.fr       */
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
	void	SetFirstName(std::string name);
	void	SetLastname(std::string name);
	void	SetNickname(std::string name);
	void	SetSecret(std::string str);
	void	SetNumber(std::string nbr);
	std::string	GetFirstname(void);
	std::string GetLastName(void);
	std::string GetNickname(void);
	std::string	GetNumber(void);
	std::string	GetSecret(void);
};

#endif
