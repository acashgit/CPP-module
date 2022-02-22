#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
protected:
		FragTrap();
public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &frag);
		virtual ~FragTrap();

		FragTrap		&operator=(FragTrap const &frag);
		void			highFivesGuys(void);
};

#endif