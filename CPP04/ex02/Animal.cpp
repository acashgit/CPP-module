#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "this " <<  "Animal" << " die" << std::endl;
}

Animal	&Animal::operator=(Animal const &old)
{
	this->type = old.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}