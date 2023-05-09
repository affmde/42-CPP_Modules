/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:04:24 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/09 13:56:54 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	//this->materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource copy construcotr called" << std::endl;
	//this->materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->materias[i] = other.materias[i];
}


MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = other.materias[i];
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
}


//Member functions

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = materia;
			std::cout << "Materia saved successfully on materiaSource" << std::endl;
			return ;
		}
	}
	std::cout << "You have no more space to learn new materias" << std::endl;
	delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->materias[i]->getType() == type)
		{
			if (!type.compare("ice"))
				return (this->materias[i]->clone());
			else
				return (this->materias[i]->clone());
		}
	}

	return (0);
}


