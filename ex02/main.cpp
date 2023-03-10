/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:49:03 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/10 17:04:43 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "memory adress of str:         " <<(void*)&str << endl;
	cout << "memory adress of stringPTR:   " << stringPTR << endl;
	cout << "memory adress of &stringREF:  " << &stringREF << endl;

	cout << "value of str:                 " << str << endl;
	cout << "value of stringPTR:           " << *stringPTR << endl;
	cout << "value of &stringREF:          " << stringREF << endl;
	return (0);
}
