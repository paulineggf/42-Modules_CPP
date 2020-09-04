#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const &type) :
_hp(hp),
_type(type) {}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy::~Enemy() {}

Enemy		&Enemy::operator=(Enemy const &rhs)
{
	_hp = rhs._hp;
	_type = rhs._type;
	return *this;
}

std::string	Enemy::getType() const
{
	return _type;
}

int		Enemy::getHP() const
{
	return _hp;
}

void		Enemy::takeDamage(int damage)
{
	if (damage > 0)
		_hp -= damage;
	if (_hp < 0)
	{
		_hp = 0;
		delete this;
	}
}
