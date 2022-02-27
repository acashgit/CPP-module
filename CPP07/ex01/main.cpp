#include "iter.hpp"

int main(int, char**)
{

	std::cout << "---Integer array---" << std::endl;
	int array[5] = { 1, 2, 3, 4, 5 };
	iter(array, 5, &ft_f); 
	std::cout << std::endl;
	std::cout << "---String  array---" << std::endl;
	std::string string_array[3] = { "SHLYAPA", "Kak", "Raz"};
	iter(string_array, 3, &ft_f); 
	std::cout << std::endl;
    return 0;
}