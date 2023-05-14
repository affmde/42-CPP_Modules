/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:56:57 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/14 11:14:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"


class Serializer
{
	public:
		static uintptr_t	serialize(Data	*ptr);
		static Data			*deserialize(uintptr_t raw);
	private:
		Serializer(void);
		Serializer(const Serializer&);
		Serializer	&operator=(const Serializer&);
		~Serializer(void);
};

#endif