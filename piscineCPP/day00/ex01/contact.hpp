#ifndef CONTACT_HPP
# define CONTACT_HPP

enum	info
{
	first_name,
	last_name,
	nick_name,
	login,
	postal_address,
	email,
	birthday,
	phone_number,
	favorite_meal,
	underwear_color,
	darkest_secret,
	last
};

class	contact
{
	private:
	std::string	*_info[last][2]; 
	int			_index;

	static int	_nb_inst;

	void		add();
	void		add2();
	void		add3();

	public:
	contact();
	~contact();

	static int	get_nb_inst(void);
	void		get_info() const;
	void		get_more_info() const;
};

#endif
