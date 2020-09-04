#ifndef SOLDIER_HPP
# define SOLDIER_HPP

# include <iostream>
# include "Victim.hpp"

class	Soldier : public Victim
{
	private:
	Soldier();
	
	public:
	Soldier(std::string);
	~Soldier();
	Soldier	&operator=(Soldier const &rhs);

	virtual void	getPolymorphed() const;
};

#endif
