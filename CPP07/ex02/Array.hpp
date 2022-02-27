#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
		int	len;
		T	*array;
public:
		Array<T>(void): len (0), array(NULL)
		{
		}
		Array<T>(const unsigned int len) : len(len)
		{
			if (len < 0)
				throw std::overflow_error("index is too low");
			this->array = new T[len];
		}
		Array<T>(const Array<T> &old)
		{
			this->len = 0;
			this->array = NULL;
			*this = old;
		}
		~Array<T>(void)
		{
			if (this->len > 0)
				delete[] this->array;
		}
		Array<T>	&operator=(const Array<T> &old)
		{
			if (this == &old)
				return (*this);
			if (this->len)
				delete[] this->array;
			this->len = old.size();
			this->array = new T[this->len];
			for (int i = 0; i < this->len; i++)
			{
				this->array[i] = old[i];
			}
			return (*this);
		}
		T	&operator[](const int index) const
		{
			if (index >= this->len || index < 0)
				throw std::overflow_error("Wrong index");
			return (this->array[index]);
		}
		int	size(void) const
		{
			return this->len;
		}

};

#endif