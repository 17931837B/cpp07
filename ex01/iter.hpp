#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void (*func)(T&))
{
	size_t	i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void	iter(T *array, size_t length, void (*func)(T const &))
{
	size_t	i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}

#endif
