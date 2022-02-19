#include "Zombie.hpp"

int	main(void)
{
	int	horde_size = 5;
	Zombie *hord = zombieHorde(horde_size, "Foo");

	for (size_t i = 0; i < horde_size; i++)
	{
		hord[i].announce();
	}
	delete[] (hord);
	return (0);
}