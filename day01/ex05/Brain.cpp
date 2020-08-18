#include "Brain.hpp"

Brain::Brain() : _capacity("Nul") {} ;

Brain::Brain(std::string capacity) :
_capacity(capacity) {}

Brain	*Brain::identifier()
{
	return this;
}
