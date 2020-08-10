#include "Pony.hpp"

int	pony::_nb_inst = 0;

pony::pony()
{
	_nb_inst += 1;
	_race = "default";
	_couleur = "default";
}

pony::pony(std::string race, std::string couleur) : _race(race), _couleur(couleur) {
	_nb_inst += 1;
}

pony::~pony() {
	pony::_nb_inst -= 1;
	std::cout << "Destructor : " << this->_race << std::endl;
}

int	pony::get_nb_inst(void)
{
	return pony::_nb_inst;
}
