/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:31:35 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/29 13:33:09 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{

	AForm *a;
	std::string target = "Home";
	a = new ShrubberyCreationForm(target);
	Bureaucrat andre("Andre", 1);
	andre.signForm(*a);
	try
	{
		a->execute(andre);
	}
	catch(ShrubberyCreationForm::FormNotSigned &e)
	{
		std::cout << e.what() << std::endl;
	}


	delete a;
	return (0);
}
