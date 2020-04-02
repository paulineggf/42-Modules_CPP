#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap&	operator=(NinjaTrap const &rhs);

	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(NinjaTrap &target);
};

#endif
