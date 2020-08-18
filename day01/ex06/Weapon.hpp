#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	private:
	std::string	_type;

	public:
	Weapon(Weapon const &weapon);
	Weapon(std::string type);
	void				setType(std::string type);
	const std::string	&getType();
};

#endif
