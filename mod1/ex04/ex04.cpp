#include <iostream>
#include <string>

int main()
{
	std::string core = "HI THIS IS BRAIN";
	std::string *same = &core;
	std::string &ref = core;

	std::cout << core << *same << ref << std::endl;
	core = "hello";
	std::cout << core << *same << ref << std::endl;
	return 0;
}
