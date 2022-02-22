#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
		std::string name;
protected:
		DiamondTrap();
public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diam);
		virtual ~DiamondTrap();

		DiamondTrap		&operator=(DiamondTrap const &diam);
		virtual void	attack(const std::string &target);
		void			whoAmI(void);
};

#endif