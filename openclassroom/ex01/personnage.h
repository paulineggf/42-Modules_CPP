#ifndef PERSONNAGE_H
# define PERSONNAGE_H

# include <string>
# include <iostream>

class	personnage
{
	private:
	int		m_vie;
	int		m_mana;
	std::string	m_nom_arme;
	int		m_degats_arme;
	
	public:
	personnage();
	personnage(std::string nom_arme, int degats_arme);
	~personnage();
	void	recevoir_degats(int nb_degats);
	void	attaquer(personnage &cible);
	void	afficher_etat() const;
};


#endif
