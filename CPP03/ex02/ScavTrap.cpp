#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrapp " << this->name << " is here" << std::endl;
	this->name = name;
	this->hit_points  = 100;
	this->en_points = 50;
	this->damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is gone" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scav) : ClapTrap(scav)
{
	std::cout << "ScavTrap " << scav.name <<" is here, but cloned" << std::endl;
	this->name = scav.name;
	this->hit_points = scav.hit_points;
	this->en_points = scav.en_points;
	this->damage = scav.damage;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scav)
{
	std::cout << "ScavTrap " << scav.name <<" is here, but assig" << std::endl;
	this->name = scav.name;
	this->hit_points = scav.hit_points;
	this->en_points = scav.en_points;
	this->damage = scav.damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->en_points > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
		this->en_points--;
	}
	else if (this->hit_points <= 0)
		std::cout << "ScavTrap " << this->name << " cant attack" << " dead(" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " cant attack" << " tired" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name <<" is now in Gate keeper mode." << std::endl;
}