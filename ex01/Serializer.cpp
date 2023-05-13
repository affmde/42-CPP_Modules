/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:13:30 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/13 18:17:06 by andrferr         ###   ########.fr       */
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
	
}