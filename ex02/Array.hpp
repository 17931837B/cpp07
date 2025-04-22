#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array
{
	private:
		T				*data_;
		unsigned int	size_;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &src);
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif