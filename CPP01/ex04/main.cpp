#include <iostream>
#include <fstream>
#include <sstream>

void	ft_replace(std::ifstream &fin, std::string name, std::string src, std::string rep)
{
	std::string nname(name + std::string(".replace"));
	std::ofstream fout;
	std::string line;

	fout.open(nname);
	if (!fout.is_open())
	{
		std::cout << "Error" << std::endl; 
		return;
	}
	while (!fin.eof())
	{
		line = "";
		std::getline(fin, line);
		std::stringstream ss;
		for(int i = 0; i < line.length(); i++)
		{
			int flag = 1;
			for(int j = 0; j < src.length(); j++)
			{
				if (line[i + j] != src[j])
					flag = 0;
			}
			if (flag == 1)
			{
				ss << rep;
				i  = i + src.length() - 1;
			}
			else
				ss << line[i];
		}
		fout << ss.str() << std::endl;
	}
	fin.close();
	fout.close();
}

int	main(int argc, char **argv)
{
	std::ifstream fin;
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;  
		return (1);
	}
	if (std::string(argv[2]).length() == 0)
	{
		std::cout << "Error" << std::endl; 
		return (1);
	}
	if (std::string(argv[3]).length() == 0)
	{
		std::cout << "Error" << std::endl; 
		return (1);
	}
	fin.open(argv[1]);
	if (!fin.is_open()) 
	{
		std::cout << "Error" << std::endl; 
		return (1);
	}
	ft_replace(fin, argv[1], argv[2], argv[3]);
	return (0);
}