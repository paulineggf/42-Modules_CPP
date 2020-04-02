#include "personnage.h"

personnage::personnage()
{
	m_vie = 10;
	m_mana = 100;
	arme();
}

personnage::personnage(std::string nom_arme, int degats_arme) 
{
	m_vie = 10;
	m_mana = 100;
	arme(nom_arme, degats_arme);
}

personnage::~personnage(){
}

void 	personnage::recevoir_degats(int nb_degats)
{
	m_vie -= nb_degats;
	if (m_vie < 0)
		m_vie = 0;
}

void	personnage::attaquer(personnage &cible)
{
	cible.recevoir_degats(m_arme.get_degats());	
}

void	personnage::afficher_etat(void) const
{
	std::cout << "Vie : " << m_vie << std::endl;
	std::cout << "Mana : " << m_mana << std::endl; 
	m_arme.afficher_arme();
}

