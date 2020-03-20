#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int		i;
	int		j;
	std::string	s;

	if (argc == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; argv[i]; ++i)
		{
			s = argv[i];		
			for (j = 0; j < s.length(); ++j)
				s.at(j) = toupper(s.at(j));
			std::cout << s;
		}
		std::cout << "\n";
	}
	return 0;
}
