/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:33:43 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 19:42:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

using namespace std;

class Harl
{
	public:
	Harl(void);
	~Harl(void);
	void	complain(string level);

	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	void	(Harl::*fp)();
};


#endif
