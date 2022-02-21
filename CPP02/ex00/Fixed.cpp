#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(): getvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &dig)
{
	std::cout << "Copy constructor called" << std::endl;
	this->getvalue = dig.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &dig)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->getvalue = dig.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->getvalue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->getvalue = raw;
}

