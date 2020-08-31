#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
	void		(*_f[5])();
	static void	challengeRandom0();
	static void	challengeRandom1();
	static void	challengeRandom2();
	static void	challengeRandom3();
	static void	challengeRandom4();

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap&	operator=(ScavTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		challengeNewcomer(std::string const &target);
};

#endif
