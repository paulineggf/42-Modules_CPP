#include <string>
#include <iostream>
using namespace std;

int	main(void)
{
	int	ageUtilisateur(16);
	int	&nvVariable(ageUtilisateur);	

	cout << ageUtilisateur << endl;
	cout << nvVariable << endl;
	return (0);
}
