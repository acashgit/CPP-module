#include "Contact.hpp"

std::string Contact::names[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

Contact::Contact()
{
	for (size_t	i = 0; i < 5; i++)
		this->filed[i] = std::string();
}

Contact::~Contact()
{
}
bool	Contact::set(int index)
{
	this->index = index;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "$ " << Contact::names[i] << ": ";
		std::getline(std::cin, this->filed[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		if (this->filed[i].length() == 0)
		{
			for (size_t i = 0; i < 5; i++)
				this->filed[i] = std::string();
			return (false);
		}
	}
	return (true);
}

void	Contact::print()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->filed[i].length() > 10)
			std::cout << this->filed[i].substr(0,9) << '.';
		else
			std::cout << std::setw(10) << this->filed[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::print_f()
{
	if (this->filed[0].length() == 0)
	{
		std::cout << "invalid index" << std::endl;
		return;
	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cout<< this->names[i] << " : " << this->filed[i] << std::endl;
	}
}

bool	Contact::cmp()
{
	if (this->filed[0].length() > 0)
		return (true);	
	return (false);
}