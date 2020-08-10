#include "main.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Ifstream ifs(argv[1]);
		ifs.replace((char*)argv[2], (char*)argv[3]);
	}
	return (0);
}
