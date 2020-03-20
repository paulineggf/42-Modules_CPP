#include "annuaire.h"

class	Personne
{
	string	m_first_name;
	string	m_last_name;
	string	m_nickname;
	string	m_login;
	string	m_postal_address;
	string	m_email_address;
	int	m_phone_number;
	string	m_birthday_date;
	string	m_favorite_meal;
	string	m_underwear_color;
	string	m_darkest_secret;		

	void	first_name(string first_name)
	{
		m_first_name = first_name;
	}	
};
