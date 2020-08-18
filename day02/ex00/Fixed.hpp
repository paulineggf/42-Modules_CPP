#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	protected:
	int		_value;

	static const int	_nb_fractional_bits;

	public:
	Fixed();
	Fixed(Fixed &copy);
	~Fixed();
	Fixed&		operator=(Fixed const &rhs);	

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	
};


#endif
