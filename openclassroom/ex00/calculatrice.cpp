#include <string>
#include <iostream>
//using namespace std;

int	main(void)
{
	int	ageUtilisateur;
	std::string	prenom_nom;

	std::cout << "Quel âge avez-vous ?" << std::endl;
	std::cin >> ageUtilisateur;
	std::cout << "Vous avez " << ageUtilisateur << " ans !" << std::endl;
	
	std::cin.ignore();

	std::cout << "Quel est votre Prénom et Nom ?" << std::endl;
	getline(std::cin, prenom_nom);
	std::cout << "Vous vous appelez " << prenom_nom << std::endl;
	return (0);
}
