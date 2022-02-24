#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = std::string("WrongAnimal");
	std::cout << "New " << this->type << " Created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &old)
{
	this->type = old.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "this " << this->type<< " die" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &old)
{
	this->type = old.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Smth that i cannot understand" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}