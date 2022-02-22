#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string names) : ClapTrap(names + "_clap_name"), ScavTrap(names), FragTrap(names)
{
	std::cout << "DiamondTrap " << this->name << " is here" << std::endl;
	this->name = names;
	this->hit_points  = FragTrap::hit_points;
	this->en_points = ScavTrap::en_points;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diam) : 
	ClapTrap(diam), ScavTrap(diam.name), FragTrap(diam.name)
{
	this->name = diam.name;
	this->hit_points = diam.hit_points;
	this->en_points = diam.en_points;
	this->damage = diam.damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is gone" << std::endl;
}
void	DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->name << " : seems i'm " << this->name << " trap... or " << this->ClapTrap::name << std::endl;
}