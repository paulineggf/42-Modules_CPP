#include "AWeapon.hpp"

AWeapon::AWeapon() : 
_name(NULL),
_apcost(0),
_damage(0) {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
_name(name),
_apcost(apcost),
_damage(damage) {
}

AWeapon::AWeapon(AWeapon const &copy) 
{
	*this = copy;
}

AWeapon		&AWeapon::operator=(AWeapon const &rhs)
{
	_name = rhs._name;
	_apcost = rhs._apcost;
	_damage = rhs._damage;
	return *this;
}

AWeapon::~AWeapon() {}

std::string	AWeapon::getName() const 
{
	return _name;
}

int		AWeapon::getAPCost() const
{
	return _apcost;
}

int		AWeapon::getDamage() const
{
	return _damage;
}
