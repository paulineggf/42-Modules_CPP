#include "Brain.hpp"

Brain::Brain() : _capacity("Nul", 100) {} ;

Brain::Brain(std::string capacity, int QI) :
_capacity(capacity),
_QI(QI) {}

Brain	*Brain::identifier()
{
	return this;
}
