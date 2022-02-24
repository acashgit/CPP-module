#include "Animal.hpp"

Animal::Animal()
{
	this->type = std::string("Animal");
	std::cout << "New " << this->type << " Created" << std::endl;
}

Animal::Animal(Animal const &old)
{
	this->type = old.type;
}

Animal::~Animal()
{
	std::cout << "this " <<  "Animal" << " die" << std::endl;
}

Animal	&Animal::operator=(Animal const &old)
{
	this->type = old.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Smth that i cannot understand" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}