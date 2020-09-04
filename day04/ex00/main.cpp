#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Soldier.hpp"
#include <fstream>

int	main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl;

	Soldier teo("Teo");
	std::cout << teo;
	robert.polymorph(teo);
	
	std::cout << std::endl;

	return (0);
}
