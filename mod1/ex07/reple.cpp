#include <string>
#include <fstream>
#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	std::ifstream file(av[1]);
	if (file.fail())
	{
		std:: cout << strerror(errno) << std::endl;
		return errno;
	}
	std::string nefl = av[1];
	nefl += ".replace";
	std::ofstream ofl(nefl);
	std::string s1 = av[2], s2 = av[3], one_line;
	while (getline(file, one_line))
	{
		size_t found;
		size_t startSearchPos = 0;
		while ((found = (one_line.substr(startSearchPos).find(s1))) != std::string::npos)
		{
			one_line.replace(startSearchPos + found, s1.length(), s2);
			startSearchPos += s2.length() + found;
		}
		ofl << one_line << "\n";
	}
	file.close();
	ofl.close();
	return 0;
}