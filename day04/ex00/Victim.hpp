#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <fstream>
# include <iostream>

class	Victim
{
	protected:
	std::string	_name;
	
	Victim();

	public:
	Victim(std::string);
	~Victim();
	Victim	&operator=(Victim const &rhs);

	void		introduce(std::ostream &flux) const;
	virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &flux, Victim const &rhs);

#endif
