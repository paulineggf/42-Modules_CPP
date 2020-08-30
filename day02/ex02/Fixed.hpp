#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed
{
	protected:
	int		_value;

	static const int	_nb_fractional_bits;

	public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed&		operator=(Fixed const &rhs);	
	bool		operator<(Fixed const &rhs);	
	bool		operator>(Fixed const &rhs);	
	bool		operator<=(Fixed const &rhs);	
	bool		operator>=(Fixed const &rhs);	
	bool		operator==(Fixed const &rhs);	
	bool		operator!=(Fixed const &rhs);
	Fixed		operator+(Fixed const &rhs);	
	Fixed		operator-(Fixed const &rhs);	
	Fixed		operator*(Fixed const &rhs);	
	Fixed		operator/(Fixed const &rhs);	
	Fixed		operator++(int);	
	Fixed		operator++();
	Fixed		operator--(int);	
	Fixed		operator--();	
    static const Fixed    &min(Fixed const &lhs, Fixed const &rhs);
    static const Fixed    &max(Fixed const &lhs, Fixed const &rhs);
    static Fixed          &min(Fixed &lhs, Fixed &rhs);
    static Fixed          &max(Fixed &lhs, Fixed &rhs);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &in);


#endif
