#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, size_t len, void (*f)(T const &itme))
{
	for (size_t i = 0; i < len; i++)
		(*f)(array[i]);
}

template <typename T>
void	ft_f(T const &obj)
{
	std::cout << obj << " ";
}
#endif