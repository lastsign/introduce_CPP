#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
	std::string name;
	int weight;
	int age;
public:
	Pony(std::string name, int weight, int age);
	virtual ~Pony();
	void ponyToldAboutTheirSelf();
};

#endif // !PONY_HPP
