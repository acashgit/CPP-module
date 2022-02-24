#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = std::string("WrongCat");
	std::cout << "New " << this->type << " Created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &old)
{
	this->type = old.type;
}

WrongCat::~WrongCat()
{
	std::cout << "this " << this->type<< " die" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &old)
{
	this->type = old.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong MurMyau" << std::endl;
}
