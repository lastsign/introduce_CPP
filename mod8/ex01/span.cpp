#include "span.hpp"
#include <set>

Span::Span(unsigned int n) : _n(n)
{
	_cap = 0;
	_multiset = std::multiset<int>();
}

Span::~Span()
{
}

Span &Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		_cap = assign._cap;
		_n = assign._n;
		_multiset = assign._multiset;
	}
	return *this;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

void Span::addNumber(int value)
{
	try
	{
		if (_cap <= _n)
		{
			_multiset.insert(value);
			_cap++;
		}
		else
			throw FullAlready();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int Span::shortestSpan()
{
	try
	{
		if (_n <= 1)
		{
			throw SmallContainer();
		}
		else
		{
			int min = INT_MAX;
			std::multiset<int>::iterator itl = _multiset.begin();
			std::multiset<int>::iterator itr = _multiset.begin();
			++itr;
			for (uint i = 0; i < _n - 1; ++itl, ++itr, ++i)
			{
				if (abs(*itl - *itr) < min)
					min = abs(*itl - *itr);
			}
			return min;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return -1;
}

int Span::longestSpan()
{
	try
	{
		if (_n <= 1)
		{
			throw SmallContainer();
		}
		else
		{
			std::multiset<int>::iterator itl = _multiset.begin();
			std::multiset<int>::iterator itr = _multiset.end();
			itr--;
			return (abs(*itr - *itl));
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return -1;
}

const std::multiset<int> &Span::getMultiset() const
{
	return _multiset;
}

void Span::addNumber(std::multiset<int>::iterator begin,
					 std::multiset<int>::iterator end)
{
	try
	{
		if (_cap + 1<= _n)
		{
			for (; begin != end; ++begin)
				_multiset.insert(*begin);
			_cap++;
		}
		else
			throw FullAlready();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

