#ifndef ARME_H
# define ARME_H

# include "personnage.h"

class	arme
{
	public:
	arme();
	arme(std::string nom, int degats);
	~arme();
	void	changer_arme(std::string nom, int degats);
	void	afficher_arme() const;
	int	get_degats() const;

	private:
	std::string	m_nom;
	int		m_degats;
};

#endif
