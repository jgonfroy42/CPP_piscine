#include "phonebook.hpp"

void	set_search_function(contact list_contact[], int i)
{
	int	j;
	int	index;
	std::string	tmp;

	j = 0;
	while (j < i)
	{
		list_contact[j].get_info(j);
		j++;
	}
	std::cout << "Quel contact voulez-vous afficher (donner l'index)" << std::endl;
	getline(std::cin, tmp);
	index = (int)(tmp.at(0) - 48);
	if (index < 0 || index >= i)
		std::cout << "Ce n'est pas un contact" << std::endl;
	else
		list_contact[index].get_all();
}

int	main()
{
	int		i;
	std::string	input;
	contact		list_contact[8];

	i = 0;
	input = "";
	while (input != "EXIT")
	{
		std::cout << "Que voulez-vous faire ? (ADD, SEARCH ou EXIT)" << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (i > 7)
				std::cout << "Vous n'avez plus de place pour un nouveau contact" << std::endl;
			else
			{
				list_contact[i].init();
				i++;
			}
		}
		if (input == "SEARCH")
		{
			if (i != 0)
				set_search_function(list_contact, i);
			else
				std::cout << "Votre annuaire est vide." << std::endl;
		}

	}
}
