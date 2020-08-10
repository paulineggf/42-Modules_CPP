#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class	Peon : public Victim
{
	private:
	Peon();
	
	public:
	Peon(std::string);
	~Peon();
	Peon	&operator=(Peon const &rhs);

	virtual void	getPolymorphed() const;
};

#endif
