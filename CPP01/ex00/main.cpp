#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombe1 = new Zombie("Dangvar");
	Zombie	*zombe2 = newZombie("Foo2");
	randomChump("Foo1");
	zombe1->announce();
	zombe2->announce();
	delete(zombe1);
	delete(zombe2);
	return (0);
}