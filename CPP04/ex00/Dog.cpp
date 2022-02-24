#include "Dog.hpp"


Dog::Dog()
{
	this->type = std::string("Dog");
	std::cout << "New " << this->type << " Created" << std::endl;
}

Dog::Dog(Dog const &old)
{
	this->type = old.type;
}

Dog::~Dog()
{
	std::cout << "this " << this->type<< " die" << std::endl;
}

Dog	&Dog::operator=(Dog const &old)
{
	this->type = old.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "AufAuf" << std::endl;
}
