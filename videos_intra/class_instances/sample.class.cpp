#include "sample.class.hpp"

// Conseil Thor: utiliser la syntax a1(p1) pour le constructor
sample::sample(char p1, int p2, float const f) : a1(p2), _a1(p1), _a2(p2), _pi(f)
{
	std::cout << "Constructor called" << std::endl;

//	this->pi = f;   -- Ne fonctionne pas de cette manière pour des const
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a1: " << this->_a1 << std::endl;
	std::cout << "this->a2: " << this->_a2 << std::endl;
	std::cout << "this->pi: " << this->_pi << std::endl;

	this->public_bar();
	sample::_nb += 1;
	return ;
}

sample::~sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


// methode const = aucune modification de l'instance courante 
void	sample::public_bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}

void	sample::_private_bar(void) const
{
	std::cout << "Private_bar function called" << std::endl;
	return ;
}

int	sample::get_a2(void) const
{
	return this->_a2;
}

void	sample::set_a2(int v)
{
	if (v >= 0)
		this->_a2 = v;
	else
		std::cout << "Inferieur a 0" << std::endl;
	return ;
}

int	sample::get_nb(void)
{
	return sample::_nb;
}

int	sample::_nb = 0;
