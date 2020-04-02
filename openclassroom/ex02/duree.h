#ifndef DUREE_H
# define DUREE_H

#include <string>
#include <iostream>


class		duree
{
	private:
	int	m_heures;
	int	m_minutes;
	int	m_secondes;

	public:
	duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool	is_equal(duree const &b) const;
	void 	afficher_attributs(std::ostream &flux) const;
};

bool		operator==(duree const &a, duree const &b);
bool		operator!=(duree const &a, duree const &b);
std::ostream	&operator<<(std::ostream &flux,
		duree const &duree);

#endif
