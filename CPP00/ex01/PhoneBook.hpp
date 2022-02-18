#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

# include "Contact.hpp"

class PhoneBook
{
private:
		Contact contacts[8];
		int		max;
		int		current;
public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
};

#endif