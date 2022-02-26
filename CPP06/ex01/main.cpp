#include <iostream>
#include <string>

typedef struct s_Data
{
	std::string str;
}Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data *d = new Data;
	Data *_new;
	uintptr_t ptr;
	d->str = "Serialization";
	std::cout << d << " : " << d->str << std::endl;

	ptr = serialize(d);
	_new = deserialize(ptr);

	std::cout << _new << " : " << _new->str << std::endl;
	return (0);
}