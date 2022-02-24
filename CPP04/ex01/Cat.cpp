#include "Cat.hpp"


Cat::Cat()
{
	this->type = std::string("Cat");
	this->brain = new Brain(this->type);
	std::cout << "New " << this->type << " Created" << std::endl;
}

Cat::Cat(Cat const &old)
{
	this->type = old.type;
	this->brain = new Brain(*old.getBrain());
	std::cout << "New " << this->type << " Created clon" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "this " << this->type<< " die" << std::endl;
}

Cat	&Cat::operator=(Cat const &old)
{
	this->type = old.type;
	this->brain = new Brain(*old.getBrain());
	std::cout << "New " << this->type << " Created clon" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MurMyau" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}