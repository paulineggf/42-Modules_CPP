#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	pony	*inst3;

	inst3 = new pony("race3", "vert");
	std::cout << "Nb instance ponyOnTheHeap() : " \
	<< pony::get_nb_inst() << std::endl;

	delete 	inst3;
}

void	ponyOnTheStack(void)
{
	pony	inst2("race2", "blanc");
	
	std::cout << "Nb instance ponyOnTheStack() : " \
	<< pony::get_nb_inst() << std::endl;
}

int	main(void)
{
	pony	*inst1 = new pony[42];

	std::cout << "Nb instance main() : " << pony::get_nb_inst() << std::endl;	
	ponyOnTheStack();
	std::cout << "Nb instance main() : " << pony::get_nb_inst() << std::endl;	
	ponyOnTheHeap();
	std::cout << "Nb instance main() : " << pony::get_nb_inst() << std::endl;	
	delete [] inst1;
	std::cout << "Nb instance main() : " << pony::get_nb_inst() << std::endl;	
	return (0);
}
