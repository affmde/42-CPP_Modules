/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:41:56 by andrferr          #+#    #+#             */
/*   Updated: 2023/05/22 14:11:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	public:
		Array(void){
			this->array = new T();
			this->nbr_elements = 0;
		}
		Array(unsigned int n){
			this->nbr_elements = n;
			this->array = new T[n];
		}
		Array(const Array &other){
			this->array = new T(other.nbr_elements);
			for (unsigned int i = 0; i < other.nbr_elements; i++)
				this->array[i] = other.array[i];
			this->nbr_elements = other.nbr_elements;
		}
		Array	&operator=(const Array &other){
			delete[] this->array;
			this->array = new T(other.nbr_elements);
			for (unsigned int i = 0; i < other.nbr_elements; i++)
				this->array[i] = other.array[i];
			this->nbr_elements = other.nbr_elements;
			return (*this);
		}
		T	&operator[](int	index){
				if (index < 0 || index >= (int)this->nbr_elements)
					throw (BadIndexException());
				return (this->array[index]);
		}

		const T	&operator[](int	index) const{
				if (index < 0 || index >= (int)this->nbr_elements)
					throw (BadIndexException());
				return (this->array[index]);
		}

		~Array(void){
			delete[] this->array;
		}

		//Member Functions
		unsigned int	size(void){
			return (this->nbr_elements);
		}

		//Exceptions Class
		class BadIndexException : std::exception{
			public:
				const char *what() const throw(){
					return ("Bad Index. Tip: Check the size of the array.");
				};
		};

	private:
		T				*array;
		unsigned int	nbr_elements;
};

#endif
