#include "duree.h"


int	main(void)
{
	duree	duree1(0, 10, 28);
	duree	duree2(0, 15, 2);
	duree	duree3(0, 10, 28);

	if (duree1 == duree2)
		std::cout
		<< "Les durees sont egales !"
		<< std::endl;
	else
		std::cout
		<< "Les durees sont inegales !"
		<< std::endl;
	if (duree1 != duree3)
		std::cout
		<< "Les durees sont inegales !"
		<< std::endl;
	else
		std::cout
		<< "Les durees sont egales !"
		<< std::endl;
	std::cout << duree1 << " " << duree2 << std::endl;
	return (0);
}
