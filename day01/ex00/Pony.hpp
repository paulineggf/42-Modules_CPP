#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	pony
{
	private:
	std::string	_race;
	std::string	_couleur;

	static int	_nb_inst;

	public:
	pony();
	pony(std::string race, std::string couleur);
	~pony();
	static int	get_nb_inst();
};

#endif
