#include "Span.hpp"

Span::Span(size_t len) : len(len)
{
}

Span::Span(Span const &old)
{
	(void)old;
}

Span &Span::operator=(Span const &old)
{
	(void)old;
	return (*this);
}

Span::~Span()
{
}

const char* Span::StorageFullException::what() const throw()
{
	return "StorageFullException: storage is full";
}

const char* Span::TooFewNumbersException::what() const throw()
{
	return "TooFewNumbersException: too few numbers in da storage";
}

void	Span::addNumber(int digit)
{
	if(storage.size() < this->len)
		this->storage.insert(digit);
	else
		throw StorageFullException();
}

size_t	Span::shortestSpan(void) const
{
	size_t size = this->storage.size();
	if (size <= 1)
		throw TooFewNumbersException();
	std::multiset<int>::iterator first = this->storage.begin();
	std::multiset<int>::iterator next = ++this->storage.begin();
	size_t min = std::abs(*next - *first);
	*next++;
	*first++;
	while (next != this->storage.end())
	{
		size_t diff = std::abs(*next - *first);
		if (diff < min)
			min = diff;
		first++;
		next++;
	}
	return (min);
}

size_t Span::longestSpan(void) const
{
	if (this->storage.size() <= 1)
		throw Span::TooFewNumbersException();

	int biggest = *std::max_element(this->storage.begin(), this->storage.end());
	int smallest = *std::min_element(this->storage.begin(), this->storage.end());
	return (std::abs(biggest - smallest));
}

std::ostream &operator<<(std::ostream &out, Span const &span)
{
	std::multiset<int>::iterator item;
	
	out << "Storage with size " << span.len << " : ";
	item = span.storage.begin();
	for (; item != span.storage.end(); item++)
		out << *item << " ";
	return (out);
}

template<typename T>
void	Span::addNumber(T begin, T end) 
{
	if (this->storage.size() + std::distance(begin, end) > this->len)
		throw Span::StorageFullException();
	this->storage.insert(begin, end);
}