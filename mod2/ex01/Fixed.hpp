#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _rawBits;
	static const int _fractalBits = 8;
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator=(const Fixed& fixed);
	int getRawBits() const;
	int toInt() const;
	float toFloat() const;
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
