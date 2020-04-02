#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
	void		(*_f[5])(ScavTrap &challenger, ClapTrap &target);
	static void	challengeRandom0(ScavTrap &challenger, ClapTrap &target);
	static void	challengeRandom1(ScavTrap &challenger, ClapTrap &target);
	static void	challengeRandom2(ScavTrap &challenger, ClapTrap &target);
	static void	challengeRandom3(ScavTrap &challenger, ClapTrap &target);
	static void	challengeRandom4(ScavTrap &challenger, ClapTrap &target);

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap&	operator=(ScavTrap const &rhs);

	void		rangedAttack(ClapTrap &target);
	void		meleeAttack(ClapTrap &target);
	void		challengeNewcomer(ClapTrap &target);
};

#endif
