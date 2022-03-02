#ifndef SPAN_HPP
#define SPAN_HPP

# include <cstdlib>
# include <algorithm>
# include <cmath>
# include <iostream>
# include <set>

class Span 
{
private:
		Span();
public:
		size_t	len;
		std::multiset<int> storage;

		Span(size_t len);
		Span(Span const &old);
		virtual ~Span();

		Span &operator=(Span const &old);
		class StorageFullException: public std::exception {
			virtual const char* what() const throw();
		};
		class TooFewNumbersException: public std::exception {
			virtual const char* what() const throw();
		};

		void addNumber(int digit);
		template<typename T>
		void	addNumber(T begin, T end);
		size_t	shortestSpan(void) const;
		size_t	longestSpan(void) const;
};

template<typename T>
void	Span::addNumber(T begin, T end) 
{
	if (this->storage.size() + std::distance(begin, end) > this->len)
		throw Span::StorageFullException();
	this->storage.insert(begin, end);
}

std::ostream &operator<<(std::ostream &out, Span const &span);

#endif