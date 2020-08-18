#include "Human.hpp"

Human::Human() : _brain("Nul") {}

Brain	*Human::identifier()
{
	return this->_brain.identifier();
}

Brain	&Human::getBrain()
{
	return *(&(this->_brain));
}
