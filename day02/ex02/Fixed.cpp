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

bool		    Fixed::operator<(Fixed const &rhs)
{
    return _value < rhs.getRawBits();
}

bool		    Fixed::operator>(Fixed const &rhs)
{
    return _value > rhs.getRawBits();
}

bool		    Fixed::operator<=(Fixed const &rhs)
{
    return _value <= rhs.getRawBits();
}

bool		    Fixed::operator>=(Fixed const &rhs)
{
    return _value >= rhs.getRawBits();
}

bool		    Fixed::operator==(Fixed const &rhs)
{
    return _value == rhs.getRawBits();
}

bool		    Fixed::operator!=(Fixed const &rhs)
{
    if (_value != rhs.getRawBits())
        return true;
    return false;
    // return _value != rhs.getRawBits();
}

Fixed		    Fixed::operator+(Fixed const &rhs)
{
    Fixed   a(this->toFloat() + rhs.toFloat());
    return a;
}

Fixed		    Fixed::operator-(Fixed const &rhs)
{
    Fixed   a(this->toFloat() - rhs.toFloat());
    return a;
}

Fixed		    Fixed::operator*(Fixed const &rhs)
{
    Fixed   a(this->toFloat() * rhs.toFloat());
    return a;
}

Fixed		    Fixed::operator/(Fixed const &rhs)
{
    Fixed   a(this->toFloat() / rhs.toFloat());
    return a;
}

Fixed           Fixed::operator++()
{
    this->setRawBits(_value + 1);
    return *this;
}

Fixed           Fixed::operator++(int)
{
    Fixed a;

    a.setRawBits(this->getRawBits());
    this->setRawBits(_value + 1);
    return a;
}

Fixed           &Fixed::min(Fixed &lhs, Fixed &rhs)
{
    if (lhs.getRawBits() < rhs.getRawBits())
        return lhs;
    return rhs;
}

Fixed           &Fixed::max(Fixed &lhs, Fixed &rhs)
{
    if (lhs.getRawBits() < rhs.getRawBits())
        return rhs;
    return lhs;
}