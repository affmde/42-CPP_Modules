/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:21:23 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/08 18:00:45 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	Contact newContact(20);

	std::cout << "Number is: " << newContact.number << std::endl;
	return (0);
}
