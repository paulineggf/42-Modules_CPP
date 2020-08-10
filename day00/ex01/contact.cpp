#include "main.hpp"

int	contact::_nb_inst = 0;

int	contact::get_nb_inst(void)
{
	return contact::_nb_inst;
}

contact::contact(void)
{
	contact::_nb_inst += 1;
	this->_index = contact::_nb_inst;
	this->add();
	this->add2();
	this->add3();
}

contact::~contact(void) {
}

void	contact::add3(void)
{
	std::string	tmp;

	std::cout << "Favorite meal : ";
	this->_info[favorite_meal][0] = new std::string("Favorite meal : ");
	std::getline(std::cin, tmp);
	this->_info[favorite_meal][1] = new std::string(tmp);
	std::cout << "Underwear color : ";
	this->_info[underwear_color][0] = new std::string("Underwear color : ");
	std::getline(std::cin, tmp);
	this->_info[underwear_color][1] = new std::string(tmp);
	std::cout << "Darkest secret : ";
	this->_info[darkest_secret][0] = new std::string("Darkest secret : ");
	std::getline(std::cin, tmp);
	this->_info[darkest_secret][1] = new std::string(tmp);
}

void	contact::add2()
{
	std::string	tmp;

	std::cout << "Postal address : ";
	this->_info[postal_address][0] = new std::string("Postal address : ");
	std::getline(std::cin, tmp);
	this->_info[postal_address][1] = new std::string(tmp);
	std::cout << "Email address : ";
	this->_info[email][0] = new std::string("Email address : ");
	std::getline(std::cin, tmp);
	this->_info[email][1] = new std::string(tmp);
	std::cout << "Phone number : ";
	this->_info[phone_number][0] = new std::string("Phone number : ");
	std::getline(std::cin, tmp);
	this->_info[phone_number][1] = new std::string(tmp);
	std::cout << "Birthday date (JJ/MM/AAAA) : ";
	this->_info[birthday][0] = new std::string("Birthday date : ");
	std::getline(std::cin, tmp);
	this->_info[birthday][1] = new std::string(tmp);
}

void	contact::add() 
{
	std::string	tmp;

	std::cout << std::endl << "First name : ";
	this->_info[first_name][0] = new std::string("First name : ");
	std::getline(std::cin, tmp);
	this->_info[first_name][1] = new std::string(tmp);
	std::cout << "Last name : ";
	this->_info[last_name][0] = new std::string("Last name : ");
	std::getline(std::cin, tmp);
	this->_info[last_name][1] = new std::string(tmp);
	std::cout << "Nickname : ";
	this->_info[nick_name][0] = new std::string("Nickname : ");
	std::getline(std::cin, tmp);
	this->_info[nick_name][1] = new std::string(tmp);
	std::cout << "Login : ";
	this->_info[login][0] = new std::string("Login : ");
	std::getline(std::cin, tmp);
	this->_info[login][1] = new std::string(tmp);
}

void	contact::get_info() const
{
	int		i;
	std::string	str;

	i = 0;
	std::cout << "| " << std::setw(10) << this->_index << " | ";
	while (i <= nick_name)
	{
		str = *this->_info[i][1];
		if (str.length() > 10)
		{
			str = str.erase(9, str.length() - 9);
			str.append(".");
		}
		std::cout << std::setw(10) << str << " | ";
		i++;
	}
	std::cout << std::endl;
}

void	contact::get_more_info() const
{
	int	i;

	i = 0;
	std::cout << std::endl << "Index : " << this->_index << std::endl;
	while (i < last)
	{
		std::cout << *this->_info[i][0] << *this->_info[i][1] << std::endl;
		i++;
	}
}
