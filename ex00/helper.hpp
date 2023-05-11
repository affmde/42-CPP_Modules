/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:56:32 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/11 17:11:03 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

#include <iostream>
#include <ctype.h>

int		string_detector(std::string str);
void	converterFromFloat(float f);
void	converterFromInt(int i);
void	converterFromDouble(double d);
void	converterFromChar(char c);
void	convertInfinity(void);

#endif
