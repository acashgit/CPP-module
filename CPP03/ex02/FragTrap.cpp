#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrapp " << this->name << " is here" << std::endl;
	this->name = name;
	this->hit_points  = 100;
	this->en_points = 100;
	this->damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is gone" << std::endl;
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag)
{
	std::cout << "FragTrap " << frag.name <<" is here, but cloned" << std::endl;
	this->name = frag.name;
	this->hit_points = frag.hit_points;
	this->en_points = frag.en_points;
	this->damage = frag.damage;
}

FragTrap	&FragTrap::operator=(FragTrap const &frag)
{
	std::cout << "FragTrap " << frag.name <<" is here, but assig" << std::endl;
	this->name = frag.name;
	this->hit_points = frag.hit_points;
	this->en_points = frag.en_points;
	this->damage = frag.damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " High FIVE!" << std::endl;
}