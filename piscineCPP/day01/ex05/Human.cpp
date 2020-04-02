#include "Human.hpp"

Human::Human() : _brain("Nul", 100) {
}

Brain	*Human::identifier()
{
	return this->_brain.identifier();
}

Brain	&Human::getBrain()
{
	return *(&(this->_brain));
}
