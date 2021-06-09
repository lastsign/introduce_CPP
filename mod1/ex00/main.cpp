#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony* pony = new Pony("Pewdiefy", 23, 2);
	pony->ponyToldAboutTheirSelf();
	delete pony;
}

void ponyOnTheStack()
{
	Pony pony = Pony("Pinkei", 34, 3);
	pony.ponyToldAboutTheirSelf();
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
