#include "main.hpp"

Ifstream::Ifstream(std::string file) : 
_ifs(file),
_file(file),
_fileReplace(file) {
	_fileReplace.append(".replace");
	_ifs.seekg(0, _ifs.end);
	_ifsSize = _ifs.tellg();
	_ifs.seekg(0);
}

Ifstream::~Ifstream() {
	_ifs.close();
}

void	Ifstream::replace(char *s1, char *s2)
{
	size_t			n;
	char			c;
	std::streampos		tmp;
	std::ofstream		ofsReplace(_fileReplace);

	while (_ifs.tellg() != _ifsSize)
	{
		n = 0;
		tmp = _ifs.tellg();
		_ifs.get(c);
		while (s1[n] == c && s1[n + 1] != '\0')
		{
			_ifs.get(c);
			n++;
		}
		if (n == std::strlen(s1) - 1 && std::strlen(s1) != 1)
			ofsReplace.write(s2, std::strlen(s2));
		else if (std::strlen(s1) == 1 && s1[n] == c)
			ofsReplace.write(s2, std::strlen(s2));
		else
		{
			_ifs.seekg(tmp);
			_ifs.get(c);
			ofsReplace.write(&c, 1);
		}
	}
	ofsReplace.close(); 
}
