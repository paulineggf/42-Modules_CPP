#include "Fixed.hpp"

const int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(_value);
	*this = copy;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	_value = rhs._value;
	return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "GetRawBits member function called" << std::endl;
    return _value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "Assignation operator called" << std::endl;
    (void)raw;
}