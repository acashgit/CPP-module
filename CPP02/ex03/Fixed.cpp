#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(): getvalue(0)
{
}

Fixed::Fixed(int const dig)
{
	this->getvalue = dig << Fixed::bits;
}

Fixed::Fixed(float const dig)
{
	this->getvalue = roundf(dig * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &dig)
{
	this->getvalue = dig.getvalue;
}

Fixed::~Fixed()
{
}


int Fixed::getRawBits(void) const
{
	return (this->getvalue);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::operator= (const Fixed &dig)
{
	this->getvalue = dig.getvalue;
	return (*this);
}

Fixed Fixed::operator+ (Fixed const &dig)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + dig.getRawBits());
	return (val);
}

Fixed Fixed::operator- (Fixed const &dig)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - dig.getRawBits());
	return (val);
}
Fixed Fixed::operator* (Fixed const &dig)
{
	Fixed val(*this);
	long t1, t2;

	t1 = ((long)this->getRawBits());
	t2 = ((long)dig.getRawBits());
	val.setRawBits((t1 * t2) / (1 << Fixed::bits));
	return (val);
}
Fixed Fixed::operator/ (Fixed const &dig)
{
	Fixed val(*this);
	long t1, t2;

	t1 = ((long)this->getRawBits());
	t2 = ((long)dig.getRawBits());
	val.setRawBits((t1 * (1 << Fixed::bits)) / t2);
	return (val);
}

Fixed Fixed::operator++ ()
{
	this->getvalue++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed tmp(*this);
	operator++();
	return (*this);
}

Fixed Fixed::operator-- ()
{
	this->getvalue--;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed tmp(*this);
	operator--();
	return (*this);
}

bool	Fixed::operator> (const Fixed &dig)
{
	if (this->getRawBits() > dig.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator< (const Fixed &dig)
{
	if (this->getRawBits() < dig.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>= (const Fixed &dig)
{
	if (this->getRawBits() >= dig.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<= (const Fixed &dig)
{
	if (this->getRawBits() <= dig.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator== (const Fixed &dig)
{
	if (this->getRawBits() == dig.getRawBits())
		return (true);
	else
		return (false);
}
bool	Fixed::operator!= (const Fixed &dig)
{
	if (this->getRawBits() != dig.getRawBits())
		return (true);
	else
		return (false);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return (a);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}