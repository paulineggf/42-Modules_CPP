#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*ptr_str;
	std::string	&ref_str = str;

	str = "HI THIS IS BRAIN";
	ptr_str = &str;

	std::cout << str << std::endl;
	std::cout << &str << std::endl;
	std::cout << *ptr_str << std::endl;
	std::cout << ptr_str << std::endl;
	std::cout << ref_str << std::endl;
	std::cout << &ref_str << std::endl;
	return (0);
}
