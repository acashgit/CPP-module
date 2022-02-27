#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T t = a;
	a = b;
	b = t;
}

template<typename T>
T	&min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif