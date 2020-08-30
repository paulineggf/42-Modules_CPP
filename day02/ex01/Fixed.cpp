#include "Fixed.hpp"

const int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed() : _value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float value)
{
    _value = roundf(value * (1 << _nb_fractional_bits));
}

Fixed::Fixed(int value)
{
    _value = (int)(value << _nb_fractional_bits);
}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &copy)
{
    // std::cout << "Assignation operator called" << std::endl;
	_value = copy.getRawBits();
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
	_value = rhs.getRawBits();
	return *this;
}

int     Fixed::getRawBits(void) const
{
    // std::cout << "GetRawBits member function called" << std::endl;
    return _value;
}

void        Fixed::setRawBits(int const raw)
{
    // std::cout << "Assignation operator called" << std::endl;
    _value = raw;
}

float		    Fixed::toFloat(void) const
{
    return (float)_value / (float)(1 << _nb_fractional_bits);

}

int			    Fixed::toInt(void) const
{
    return _value >> _nb_fractional_bits;

}

std::ostream    &operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return (out);
}