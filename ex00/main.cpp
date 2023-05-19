/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:15:12 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/19 14:28:55 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"
#include <iostream>

int	main(void)
{
	/*MAIN FROM SUBJECT*/
	{int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;}

	/*SWAP FUNCTION TESTS*/
	{int a = 20;
	int b = 30;

	swap<int>(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	char c = 'c';
	char d = 'd';

	swap<char>(c, d);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;}

	/*MIN FUNCTION TESTS*/
	{int	e = 65;
	int	f = 42;
	std::cout << "min: " << min<int>(e, f) << std::endl;
	float g = 42.3f;
	float h = 65.1f;
	std::cout << "min: " << min<float>(g, h) << std::endl;
	char i = 'k';
	char j = 'k';
	std::cout << "min: " << min<char>(i, j) << std::endl;}

	/*MAX FUNCTION TESTS*/
	{int	e = 65;
	int	f = 42;
	std::cout << "max: " << max<int>(e, f) << std::endl;
	float g = 42.3f;
	float h = 65.1f;
	std::cout << "max: " << max<float>(g, h) << std::endl;
	char i = 'k';
	char j = 'k';
	std::cout << "max: " << max<char>(i, j) << std::endl;}
	return (0);
}


// class Awesome
// {
// public:
// Awesome(void) : _n(0) {}
// Awesome( int n ) : _n( n ) {}
// Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
// bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// int get_n() const { return _n; }
// private:
// int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }
// int main(void)
// {
// Awesome a(2), b(4);
// swap(a, b);
// std::cout << a << " " << b << std::endl;
// std::cout << max(a, b) << std::endl;
// std::cout << min(a, b) << std::endl;
// return (0);
// }
