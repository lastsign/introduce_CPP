#include "Pony.hpp"

Pony::Pony(std::string name, int weight, int age) : name(name), weight(weight), age(age)
{
	std::cout << "Pony is delivered in stock" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony: " << name << " sold out" << std::endl;
}

void Pony::ponyToldAboutTheirSelf()
{
	std::cout << "My name: " << name << " i'm " << age << " years old and " << "my weight is " << weight << std::endl;
}
