#include "sample.class.hpp"

int	main(void)
{
	sample instance('a', 1, 3.14);

	instance.a1 = 42;
	std::cout << "instance.a1: " << instance.a1 << std::endl;
	instance.public_bar();
	std::cout << instance.get_a2() << std::endl;
	instance.set_a2(42);
	std::cout << instance.get_a2() << std::endl;
	std::cout << "Nb instances : " << sample::get_nb() << std::endl;
	return (0);
}
