/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:10:38 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/22 14:06:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int	iArray[] = {1, 2, 3, 4, 5};
	iter<int>(iArray, (unsigned int)5, display);
	for (int i = 0; i < 5; i++)
		std::cout << iArray[i] << std::endl;
	float	fArray[] = {1.3f, 2.8f, 3.0f, 4.7f, 5.6f};
	iter<float>(fArray, (unsigned int)5, display);
	for (int i = 0; i < 5; i++)
		std::cout << fArray[i] << std::endl;
	char	strArray[] = {'a', 'b', 'C', 'd', 'E'};
	iter<char>(strArray, (unsigned int)5, display);
	for (int i = 0; i < 5; i++)
		std::cout << strArray[i] << std::endl;
	return (0);
}

// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	::iter( tab, 5, print );
// 	::iter( tab2, 5, print );
// 	return 0;
// }
