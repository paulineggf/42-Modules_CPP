#ifndef IFSTREAM_HPP
# define IFSTREAM_HPP

class	Ifstream
{
	private:
	std::string	_file;
	std::string	_fileReplace;
	std::ifstream	_ifs;
	std::streampos	_ifsSize;

	public:
	Ifstream(std::string file);
	~Ifstream();
	void	replace(char *s1, char *s2);
};

#endif
