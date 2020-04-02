#include "duree.h"

duree::duree(int heures, int minutes, int secondes)
{
	m_heures = heures;
	m_minutes = minutes;
	m_secondes = secondes;
}

bool		duree::is_equal(duree const &b) const
{
	if (m_heures == b.m_heures
	&& m_minutes == b.m_minutes
	&& m_secondes == b.m_secondes)
		return (true);
	else
		return (false);
	
}

bool		operator==(duree const &a, duree const &b)
{
	return a.is_equal(b);
}

bool		operator!=(duree const &a, duree const &b)
{
	return (!(a==b));
}

void		duree::afficher_attributs(std::ostream &flux) const
{
	flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

std::ostream	&operator<<(std::ostream &flux, duree const &duree)
{
	duree.afficher_attributs(flux);	
	return (flux);
}
