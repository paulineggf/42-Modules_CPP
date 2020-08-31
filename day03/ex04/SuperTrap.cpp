#include "SuperTrap.hpp"

SuperTrap::SuperTrap() :
ClapTrap(100, 100, 120, 120, 1, 60, 20, 5),
FragTrap(),
NinjaTrap() {
	std::cout << "SuperTrap random name constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) :
ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 0),
FragTrap(name),
NinjaTrap(name) {
	std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
}
