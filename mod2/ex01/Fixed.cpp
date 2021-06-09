#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value * (1 << _fractalBits);
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = static_cast<int>(roundf(value * (1 << _fractalBits)));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = fixed._rawBits;
	return *this;
}

int Fixed::getRawBits() const
{
	return _rawBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_rawBits) / static_cast<float>((1 << _fractalBits));
}

int Fixed::toInt() const
{
	return _rawBits / (1 << _fractalBits);
}


std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	return os << fixed.toFloat();
}