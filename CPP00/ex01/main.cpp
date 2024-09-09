# include "Phonebook.hpp"
# include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>

void	ft_print_10(std::string txt)
{
	std::string::size_type i = 0;

    while (i <= 9)
    {
        if (txt.length() > i)
        {
            if (i == 9)
                std::cout << ".";
            else
                std::cout << txt[i];
        }
        else
            std::cout << " ";
        ++i;
    }
    return;
}

void	ft_search(Phonebook *phonebook)
{
	int	i = 0;
	int len = (*phonebook).get_len();
	Contact *list = (*phonebook).get_list();
	std::string input;
	
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while(i < len)
	{
		std::cout << "|";
		std::cout << list[i].getId() << "         ";
		std::cout << "|";
		ft_print_10(list[i].getFname());
		std::cout << "|";
		ft_print_10(list[i].getLname());
		std::cout << "|";
		ft_print_10(list[i].getNname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while(true)
	{
		std::cout << "Introduce el id del contacto" << std::endl;
		std::cout << "> ";
		if (std::getline(std::cin, input).rdstate() == 0)
		{
			if(input == "EXIT")
				return ;
			if (!input.empty() && input.length() == 1)
				if(input.find_first_not_of("12345678") == std::string::npos)
				{
					std::stringstream ss(input);
					if (ss >> i && i <= len && i > 0)
						break;
				}
			std::cout << "\033[1;31m Invalid ID\033[0m" << std::endl;
		}
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << " * First name: " << list[i - 1].getFname() << std::endl;
	std::cout << " * Last name: " << list[i - 1].getLname() << std::endl;
	std::cout << " * Nickname: " << list[i - 1].getNname() << std::endl;
	std::cout << " * Phone number: " << list[i - 1].getPnumber() << std::endl;
	std::cout << " * Darkest secret:"<< list[i - 1].getSecret() << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

std::string	ft_parser(std::string msg, int i)
{
	std::string	input = "";

	while(1)
	{
		std::cout << msg << std::endl;
		std::cout << "> ";
		if (std::getline(std::cin, input).rdstate() == 0)
			if (!input.empty())
			{
				if (i == 3 && input.find_first_not_of("0123456789") == std::string::npos)
					if(input.length() == 9)
						return (input);
				if (i != 3)
					return (input);
			}
		std::cout << "\033[1;31m Invalid Data\033[0m" << std::endl;
	}
}

void	ft_add(Phonebook *phonebook)
{
	std::string	msg[5] = {"First name:", "Last name:", "Nickname:", "Phone number:" , "Darkest secret:"};
	std::string	input[5];
	int i = -1;

	while(++i < 5)
		input[i] = ft_parser(msg[i], i);
	Contact nodo(input[0], input[1], input[2], input[3], input[4]);
	(*phonebook).add_nodo(nodo);
}

int	main()
{
	Phonebook phonebook;
	std::string	input = "";

	std::cout << "Insert command: (ADD, SEARCH, EXIT):" << std::endl;
	while (1)
	{
		std::cout << "> ";
		if (std::getline(std::cin, input).rdstate() != 0)
			return 1;
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
			ft_add(&phonebook);
		else if (input == "SEARCH")
			ft_search(&phonebook);
	}
}