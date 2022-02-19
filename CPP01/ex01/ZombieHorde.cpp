#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*hord = new Zombie[N];
	std::stringstream ss;
	for (size_t i = 0; i < N; i++)
	{
		ss.str(std::string());
		ss << i + 1;
		hord[i].set_name(name + std::string(ss.str()));
	}
	return (hord);
}