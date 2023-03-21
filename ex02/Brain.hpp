/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:07:22 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/21 16:17:37 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		Brain &operator=(const Brain&);
		~Brain(void);

		//member functions
		void		addIdeaAt(int index, std::string idea);
		std::string	getIdeaAt(int index);
	protected:

	private:
		std::string	ideas[100];
};



#endif
