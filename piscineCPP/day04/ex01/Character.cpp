#include "Character.hpp"

Character::Character() :
_name(NULL),
_AP(0),
_weapon(NULL) {
}

Character::Character(std::string name) :
_name(name),
_AP(40),
_weapon(NULL) {
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character 	&Character::operator=(Character const &rhs)
{
	_name = rhs._name;
	_AP = rhs._AP;
	_weapon = rhs._weapon;
	return *this;
}

Character::~Character() {
	std::cout << "Character is delete" << std::endl;
}

void		Character::recoverAP()
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

AWeapon		*Character::getWeapon() const
{
	return _weapon;
}

int		Character::getAP() const
{
	return _AP;
}

void		Character::attack(Enemy *enemy)
{
	if (this->_weapon != NULL && _AP >= _weapon->getAPCost())
	{
		std::cout << "AP Cost : " << _weapon->getAPCost() << std::endl;
		std::cout << "AP : " << _AP << std::endl;
		std::cout << _name << " attaque " << enemy->getType()
		<< " with a " << _weapon->getName() << std::endl; 
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		_AP -= _weapon->getAPCost();
		if (_AP < 0)
			_AP = 0;
	}
	else
	{
		std::cout << _name << " doesn't have enough AP to attack"
		<< std::endl;
	}
}

void		Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void		Character::introduce(std::ostream &flux) const
{
	if (_weapon)
	{
		flux << _name << " has " << _AP << " AP and carries a "
		<< _weapon->getName() << std::endl;
	}
	else
	{
		flux << _name << " has " << _AP << " Ap and is unarmed"
		<< std::endl;
	}
}

std::ostream	&operator<<(std::ostream &flux, Character const &rhs)
{
	rhs.introduce(flux);
	return (flux);
}
