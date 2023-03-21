/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:01:25 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 18:23:11 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria string constructor called" << std::endl;
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria copy assignement operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMteria destructor called" << std::endl;
}
