#include <string>
#include <iostream>
using namespace std;

int	main(void)
{
	int	ageUtilisateur;
	string	prenom_nom;

	cout << "Quel âge avez-vous ?" << endl;
	cin >> ageUtilisateur;
	cout << "Vous avez " << ageUtilisateur << " ans !" << endl;
	
	cin.ignore();

	cout << "Quel est votre Prénom et Nom ?" << endl;
	getline(cin, prenom_nom);
	cout << "Vous vous appelez " << prenom_nom << endl;
	return (0);
}
