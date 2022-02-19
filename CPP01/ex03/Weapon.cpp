#include "Weapon.hpp"

Weapon::Weapon()
{
	this->name = "";
}

Weapon::Weapon(std::string name)
{
	this->name = name;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->name = type;
}

std::string const &Weapon::getType(void)
{
	return (this->name);
}