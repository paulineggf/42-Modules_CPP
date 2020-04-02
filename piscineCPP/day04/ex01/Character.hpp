#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <fstream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
	std::string	_name;
	int		_AP;
	AWeapon		*_weapon;
	
	Character();
	
	public:
	Character(std::string name);
	Character(Character const &character);
	virtual ~Character();
	Character 	&operator=(Character const &character);
	
	std::string	&getName() const;
	AWeapon		*getWeapon() const;
	int		getAP() const;
	void		introduce(std::ostream &flux) const;

	void		recoverAP();
	void		equip(AWeapon*);
	void		attack(Enemy*);
};

std::ostream	&operator<<(std::ostream &flux, Character const &rhs);

#endif
