#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "Robot.hpp"

class	ScavTrap : public Robot
{
	private:
	void		(*_f[5])(ScavTrap &challenger, Robot &target);
	static void	challengeRandom0(ScavTrap &challenger, Robot &target);
	static void	challengeRandom1(ScavTrap &challenger, Robot &target);
	static void	challengeRandom2(ScavTrap &challenger, Robot &target);
	static void	challengeRandom3(ScavTrap &challenger, Robot &target);
	static void	challengeRandom4(ScavTrap &challenger, Robot &target);

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap&	operator=(ScavTrap const &rhs);

	void		rangedAttack(Robot &target);
	void		meleeAttack(Robot &target);
	void		challengeNewcomer(Robot &target);
};

#endif
