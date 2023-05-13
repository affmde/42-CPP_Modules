/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/13 18:14:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data(int);
		Data(const Data&);
		Data	&operator=(const Data&);
		~Data(void);

		//Member Functions
		void	setNumber(int);
		int		getNumber(void);
		
	private:
		int	number;
};

#endif