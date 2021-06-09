#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> a(14);
	for (int i = 0; i < 14; ++i)
		a[i] = i * (3 + i);
	std::cout << easyfind(a, 208) << std::endl;
	for (int i = 0; i < 14; ++i)
		std::cout << a[i] << std::endl;
}
