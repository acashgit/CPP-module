#include "Cat.hpp"


Cat::Cat()
{
	this->type = std::string("Cat");
	std::cout << "New " << this->type << " Created" << std::endl;
}

Cat::Cat(Cat const &old)
{
	this->type = old.type;
}

Cat::~Cat()
{
	std::cout << "this " << this->type<< " die" << std::endl;
}

Cat	&Cat::operator=(Cat const &old)
{
	this->type = old.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MurMyau" << std::endl;
}
