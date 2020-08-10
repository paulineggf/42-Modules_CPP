#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
	std::string	_name;
	std::string	_type;
	
	public:
	Zombie();
	Zombie(std::string name, std::string type);
	void	advert() const;
	void	announce() const;

};

#endif
