/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:13:30 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 11:22:03 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){}
Serializer::Serializer(const Serializer &other){*this = other;}
Serializer	&Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}
Serializer::~Serializer(void){}

//Member Functions

uintptr_t Serializer::serialize(Data *ptr)
{
	
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return (p);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}