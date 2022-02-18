#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	line;

	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, line))
			break;
		if (line == "ADD")
			book.add();
		else if (line == "SEARCH")
			book.search();
		else if (line == "EXIT")
			break;
		else
			std::cout << "not a command" << std::endl;
	}
	return (0);
}