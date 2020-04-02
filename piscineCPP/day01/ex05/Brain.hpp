#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
	std::string	_capacity;
	int		_QI;

	public:
	Brain();
	Brain(std::string capacity, int QI);
	Brain		*identifier();
};

#endif
