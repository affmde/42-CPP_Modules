/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:53:04 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/08 18:16:12 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>


Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Contact::Contact(int n)
{
	number = n;
}
