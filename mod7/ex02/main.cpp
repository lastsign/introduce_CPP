#include "Array.hpp"

int main()
{
	unsigned int len = 12;
	Array<float> f(len);
	try
	{
		std::cout << f[13] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << f[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < f.size(); ++i)
	{
		try
		{
			f[i] = i * 3.1;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	for (int i = 0; i < f.size(); ++i)
	{
		try
		{
			std::cout << f[i] << " ";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}