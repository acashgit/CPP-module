#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
		std::string	name;
public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	set_name(std::string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif