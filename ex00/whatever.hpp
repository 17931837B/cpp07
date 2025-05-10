#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T const &one, T const &sec)
{
	if (one == sec)
		return (sec);
	else if (one > sec)
		return (sec);
	else
		return (one);
}

template <typename T>
T	max(T const &one, T const &sec)
{
	if (one == sec)
		return (sec);
	else if (one > sec)
		return (one);
	else
		return (sec);
}

#endif
