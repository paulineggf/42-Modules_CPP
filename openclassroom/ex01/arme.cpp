#include "personnage.h"

arme::arme()
{
	m_nom = "épée";
	m_degats = 3;
}

arme::arme(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

arme::~arme(){
}

void	arme::changer_arme(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void	arme::afficher_arme(void) const
{
	std::cout << m_nom << std::endl;
	std::cout << m_degats << std::endl;
}

int	arme::get_degats(void) const
{
	return (m_degats);
}
