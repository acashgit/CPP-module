#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(): getvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const dig)
{
	std::cout << "Int constructor called" << std::endl;
	this->getvalue = dig << Fixed::bits;
}

Fixed::Fixed(float const dig)
{
	std::cout << "Float constructor called" << std::endl;
	this->getvalue = roundf(dig * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &dig)
{
	std::cout << "Copy constructor called" << std::endl;
	this->getvalue = dig.getvalue;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &dig)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->getvalue = dig.getvalue;
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

int Fixed::toInt(void) const
{
	return (this->getvalue >> Fixed::bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->getvalue/(float)(1 << Fixed::bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const  &value)
{
	out << value.toFloat();
	return (out);
}