#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
	std::string	_capacity;

	public:
	Brain();
	Brain(std::string capacity);
	Brain		*identifier();
};

#endif
