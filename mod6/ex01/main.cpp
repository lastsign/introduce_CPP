#include <string>
#include <iostream>

struct Data
{
	std::string str1;
	int n;
	std::string str2;
};

void *serialize(void)
{
	char *space = new char[20];
	*reinterpret_cast<int*>(&space[8]) = rand() % 64 + 5;
	for (uint i = 0, j = 12; i < 7 && j < 19; ++i, ++j)
	{
		space[i] = rand() % 34 + 32;
		space[j] = rand() % 34 + 32;
	}
	space[7] = '\0';
	space[19] = '\0';
	std::cout << "string1: " << reinterpret_cast<char *>(&space[0]) << std::endl;
	std::cout << "string2: " << reinterpret_cast<char *>(&space[12]) << std::endl;
	std::cout << "int: " << *reinterpret_cast<int *>(&space[8]) << std::endl;
	return static_cast<void *>(space);
}

Data *deserialize(void *raw)
{
	Data *data = new Data();
	data->str1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->str2 = std::string(&reinterpret_cast<char *>(raw)[12], 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	return data;
}

int main()
{
	srand(time(0));
	void *bee = serialize();
	Data *data = deserialize(bee);
	std::cout << "string1: " << data->str1 << std::endl;
	std::cout << "string2: " << data->str2 << std::endl;
	std::cout << "int: " << data->n << std::endl;
//	std::cout << std::string("\0", 1) << std::endl;
	return 0;
}