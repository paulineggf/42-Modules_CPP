#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
Robot(100, 100, 50, 50, 1, 20, 15, 3) {
	_f[0] = &ScavTrap::challengeRandom0;
	_f[1] = &ScavTrap::challengeRandom1;
	_f[2] = &ScavTrap::challengeRandom2;
	_f[3] = &ScavTrap::challengeRandom3;
	_f[4] = &ScavTrap::challengeRandom4;
	std::cout << "ScavTrap constructor called with random name : " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
Robot(name, 100, 100, 50, 50, 1, 20, 15, 3) {
	_f[0] = &ScavTrap::challengeRandom0;
	_f[1] = &ScavTrap::challengeRandom1;
	_f[2] = &ScavTrap::challengeRandom2;
	_f[3] = &ScavTrap::challengeRandom3;
	_f[4] = &ScavTrap::challengeRandom4;
	std::cout << "ScavTrap constructor called with : " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called with : " << _name << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap operator overload called with : " << _name
	<< " and " << rhs._name << std::endl;  
	Robot::operator=(rhs);
	_f[0] = rhs._f[0];
	_f[1] = rhs._f[1];
	_f[2] = rhs._f[2];
	_f[3] = rhs._f[3];
	_f[4] = rhs._f[4];
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called with : " << _name << std::endl;
}

void	ScavTrap::rangedAttack(std::string const  &target)
{
	std::cout << "ScavTrap " << _name << " attaque " << target
	<< " à distance, causant " << _rangedAttackDamage
	<< " points de dégâts !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const  &target)
{
	std::cout << "ScavTrap " << _name << " attaque en mêlée " << target
	<< ", causant " << _meleeAttackDamage
	<< " points de dégâts !" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int	num;
	std::string rep;

	rep = "Y";
	while (rep.compare("y") == 0 || rep.compare("Y") == 0)
	{
		num = -1;
		while (num < 0 || num > 4)
		{
			std::cout << target << ", choisis un de ces 5 challenges:\n \
			1- Charade\n \
			2- Tchin-tchin\n \
			3- Cache-Cache \n \
			4- Le nénuphare\n \
			5- Charade\n" << std::endl;
			std::cin >> num;
			num -= 1;
		}
		ScavTrap::_f[num]();
		std::cout << "Souhaites-tu rejouer ? (Y/N)" << std::endl;
		std::cin >> rep;
	}
}

void	ScavTrap::challengeRandom0()
{
	std::string rep;

	std::cout << "Charade :" << std::endl <<
	"Mon premier coupe le bois. " << std::endl <<
	"Mon second est une partie du visage. " << std::endl <<
	"Mon troisième porte les voiles d’un bateau. " << std::endl <<
	"Mon tout fut d’abord muet puis devenu parlant." << std::endl;
	std::cout << std::endl << "Ecris ta réponse en lettres capitales" << std::endl;
	std::cin >> rep;
	if (rep.compare("CINEMA") == 0)
		std::cout << "Bravo tu as trouvé la bonne réponse !!" << std::endl;
	else
		std::cout << "Dommage, la réponse était CINEMA" << std::endl;
}

void	ScavTrap::challengeRandom1()
{
	std::string rep;

	std::cout << "Tchin-tchin :" << std::endl <<
	"À l’occasion d’un anniversaire, lors de trinquer, 28 tintements de verre se font entendre." << std::endl
	<< "Combien y avait-il de personnes présentes à la soirée ?" << std::endl;
	std::cout << std::endl << "Ecris un nombre" << std::endl;
	std::cin >> rep;
	if (rep.compare("8") == 0)
		std::cout << "Bravo tu as trouvé la bonne réponse !!" << std::endl;
	else
		std::cout << "Dommage, la réponse était 8 personnes" << std::endl;
}

void	ScavTrap::challengeRandom2()
{
	std::string rep;

	std::cout << "Cache-Cache :" << std::endl <<
	"Je suis à la fin du matin, au début de la nuit, au milieu de la journée, absent du midi, deux fois dans l’année." << std::endl
	<< "Qui suis-je ?" << std::endl;
	std::cout << std::endl << "Ecris ta réponse en lettres capitales" << std::endl;
	std::cin >> rep;
	if (rep.compare("N") == 0)
		std::cout << "Bravo tu as trouvé la bonne réponse !!" << std::endl;
	else
		std::cout << "Dommage, la réponse était la lettre N" << std::endl;
}

void	ScavTrap::challengeRandom3()
{
	std::string rep;

	std::cout << "Le nénuphare :" << std::endl <<
	"Un nénuphar double de surface chaque jour. Au bout de 100 jours, il a recouvert la totalité de l’étang." << std::endl
	<< "Combien de jours, lui a-t-il fallu pour recouvrir la moitié de l’étang ?" << std::endl;
	std::cout << std::endl << "Ecris un nombre" << std::endl;
	std::cin >> rep;
	if (rep.compare("99") == 0)
		std::cout << "Bravo tu as trouvé la bonne réponse !!" << std::endl;
	else
		std::cout << "Dommage, la réponse était 99 jours" << std::endl;
}

void	ScavTrap::challengeRandom4()
{
	std::string rep;

	std::cout << "Charade :" << std::endl <<
	"Mon premier a six faces." << std::endl <<
	"On dort dans mon deuxième." << std::endl <<
	"Mon troisième est le pluriel de ciel." << std::endl <<
	"Mon tout signifie très bon." << std::endl;
	std::cout << std::endl << "Ecris ta réponse en lettres capitales" << std::endl;
	std::cin >> rep;
	if (rep.compare("DELICIEUX") == 0)
		std::cout << "Bravo tu as trouvé la bonne réponse !!" << std::endl;
	else
		std::cout << "Dommage, la réponse était DELICIEUX" << std::endl;
}


