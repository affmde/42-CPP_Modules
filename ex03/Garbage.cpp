/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Garbage.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:11:50 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/11 16:33:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Garbage.hpp"

Garbage::Garbage(void)
{
	std::cout << "Garbage default constructor called" << std::endl;
	this->materia_list = NULL;
}

Garbage::Garbage(const Garbage &other)
{
	std::cout << "Garbage copy constructor called" << std::endl;
	*this = other;
}

Garbage	&Garbage::operator=(const Garbage &other)
{
	std::cout << "Garbage copy assignment constructor called" << std::endl;
	AMateria *tmp;

	this->deleteList();

	tmp = other.materia_list;
	while (tmp)
	{
		this->pushBack(tmp);
		tmp = tmp->next;
	}
	return (*this);
}

Garbage::~Garbage(void)
{
	this->deleteList();
}


//Member Functions

void	Garbage::pushBack(AMateria *materia)
{
	AMateria *tmp;

	if (!this->materia_list)
		this->materia_list = materia;
	else
	{
		tmp = this->materia_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = materia;
	}
}

void	Garbage::printList(void)
{
	AMateria *tmp;

	tmp = this->materia_list;
	while(tmp)
	{
		std::cout << tmp->getType() << std::endl;
		tmp = tmp->next;
	}
}

void	Garbage::deleteList()
{
	AMateria *tmp;

	if (this->materia_list == NULL)
		return ;
	while(this->materia_list)
	{
		tmp = this->materia_list->next;
		std::cout << "deleting " << this->materia_list->getType() << std::endl;
		if (this->materia_list)
			delete this->materia_list;
		this->materia_list = tmp;
	}
}


