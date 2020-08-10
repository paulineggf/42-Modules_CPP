#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <fstream>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	private:
	std::string	_name;
	std::string	_title;

	Sorcerer();

	public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer &operator=(Sorcerer const &rhs);

	void	introduce(std::ostream &flux) const;
	void	polymorph(Victim const &victim) const;
};

std::ostream	&operator<<(std::ostream &flux, Sorcerer const &rhs);

#endif
