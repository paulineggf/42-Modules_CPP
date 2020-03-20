#include "personnage.h"

personnage::personnage()
{
	m_vie = 10;
	m_mana = 100;
	m_nom_arme = "épée";
	m_degats_arme = 5; 
}

personnage::personnage(std::string nom_arme, int degats_arme) 
{
	m_vie = 10;
	m_mana = 100;
	m_nom_arme = nom_arme;
	m_degats_arme = degats_arme; 
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
	cible.recevoir_degats(m_degats_arme);	
}

void	personnage::afficher_etat() const
{
	std::cout << "Vie : " << m_vie << std::endl;
	std::cout << "Mana : " << m_mana << std::endl; 
	std::cout << "Arme : " << m_nom_arme << std::endl; 
	std::cout << "Degats arme : " << m_degats_arme << std::endl; 
}

