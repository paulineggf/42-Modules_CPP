#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>
# include <string>

class	sample
{

public:
	
	int		a1;

	sample(char p1, int p2, float const f);
	~sample(void);

	void		public_bar(void) const;
	int		get_a2(void) const;
	void		set_a2(int v);
	
	static int	get_nb(void);

private:

	char		_a1;
	int		_a2;
	float const	_pi;

	static int 	_nb;
	
	void		_private_bar(void) const;
};

#endif
