#include "main.hpp"

void	new_instance(contact **tab_contact)
{
	int	i;

	i = 0;

	while (i < contact::get_nb_inst())
		i++;
	if (i >= 8)
		std::cout << "Vous avez atteint le nombre de contact maximum" << std::endl;
	else
		tab_contact[i] = new contact();
}

void	search(contact **tab_contact)
{
	int	i;
	int	index;

	i = 0;
	std::cout <<
	"|      Index | " \
	<< "First name | " \
	<< " Last Name | " \
	<< "  Nickname |" << std::endl;	
	while (i < contact::get_nb_inst())
		tab_contact[i++]->get_info();
	if (i < contact::get_nb_inst())
		std::cout << std::endl;
	std::cout << std::endl << "Tapez '0' pour quitter la recherche" << std::endl;
	std::cout << "Tapez l'index du contact pour plus d'information : ";
	std::cin >> index;
	if (index == 0)
		return ;
	else if (index <= contact::get_nb_inst() && index > 0)
		tab_contact[index - 1]->get_more_info();
	else
		std::cout << "index tapé : " << index << std::endl;
}

int	main(void)
{
	contact		*tab_contact[8];
	std::string	command;
	
	while (1)
	{
		std::cout << std::endl << "Tapez 'ADD' pour ajouter un contact" << std::endl;
		std::cout << "Tapez 'SEARCH' pour chercher un contact" << std::endl;
		std::cout << "Tapez 'EXIT' pour sortir du programme" << std::endl;
		getline(std::cin, command);
		if (command.compare("ADD") == 0)
			new_instance(tab_contact);			
		else if (command.compare("SEARCH") == 0)
		{
			search(tab_contact);
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else if (command.compare("EXIT") == 0)
			return (0);
		else
		{
			std::cout << "ELSE" << std::endl;
			continue ;
		}
	}
	return (0);
}
