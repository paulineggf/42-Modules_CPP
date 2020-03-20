#include "personnage.h"

int	main(void)
{
	personnage	pauline("hello", 4);

	pauline.afficher_etat();
	pauline.recevoir_degats(2);
	pauline.afficher_etat();
	return (0);
}
