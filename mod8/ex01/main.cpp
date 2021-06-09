#include "span.hpp"

int main()
{
	Span sp = Span(5);
//	std::multiset<int> rr = std::multiset<int>();
//	for (int i = 0; i < 10000; ++i)
//		rr.insert(i + rand() % 32);
//	try
//	{
//		sp.addNumber(rr.begin(), rr.end());
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}