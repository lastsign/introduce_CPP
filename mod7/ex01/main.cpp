#include <iostream>
#include "iter.hpp"

int main()
{
	int len = 5;
	int *a = new int[len];
	for (int i = 0; i < len; ++i)
		a[i] = i + 1;
	iter(a, len, pow2);
	delete[] a;
	len = 7;
	char *b = new char [len];
	for (int i = 0; i < len; ++i)
		b[i] = 'a' + i;
	iter(b, len, pow2);
	delete[] b;
	return 0;
}