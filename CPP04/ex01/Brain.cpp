#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = std::string("ya Jivotnoe");
	}
	std::cout << " new Brain" << std::endl;
}

Brain::Brain(std::string type)
{
	if (type == "Cat")
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = std::string("ya Kit");
		}
	}
	else if (type == "Dog")
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = std::string("ya Pes");
		}
	}
	else
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = std::string("ya Jivotnoe");
		}
	}
	std::cout << "New " << type << " get Brain" << std::endl;
}

Brain::Brain(Brain const &old)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << " new Brain clon" << std::endl;
}

Brain::~Brain()
{
	std::cout <<  "Brain" << " die" << std::endl;
}

Brain	&Brain::operator=(Brain const &old)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = old.ideas[i];
	}
	std::cout << " new Brain assig" << std::endl;
	return (*this);
}

const std::string	Brain::getThought(void) const
{
	return (this->ideas[0]);
}