#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <algorithm>
# include <set>

class Span
{
private:
	unsigned int _n;
	unsigned int _cap;
	std::multiset<int> _multiset;
public:
	Span(unsigned int n);
	Span &operator=(const Span &assign);
	Span(const Span &copy);
	virtual ~Span();
	void addNumber(int value);
	void addNumber(std::multiset<int>::iterator begin, std::multiset<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	const std::multiset<int> &getMultiset() const;
	class FullAlready : public std::exception
	{
		const char *what() const throw()
	{return "container already full";}
};
class SmallContainer : public std::exception
{
	const char *what() const throw()
	{
		return "container too small";
	}
};
};

#endif
