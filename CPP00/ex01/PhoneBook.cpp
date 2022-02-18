#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->max = 8;
	this->current = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	if (this->current == this->max)
		this->current = 0;
	if (!(this->contacts[this->current].set(this->current)))
	{
		std::cout << "Empty contact is not added" << std::endl;
		return;
	}
	this->current++;
}

void	PhoneBook::search(void)
{
	std::string 		str;
	std::stringstream	ss;
	int					indx;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (size_t i = 0; i < this->max; i++)
		if (this->contacts[i].cmp())
			this->contacts[i].print();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "$ index of the entry to display: ";
	std::getline(std::cin, str);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid index" << std::endl;
			return;
		}
	}
	ss << str;
	ss >> indx;
	if (indx < 0 || indx > this->max)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	this->contacts[indx].print_f();
}