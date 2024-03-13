# include "Phonebook.hpp"

void	ft_print_10(std::string txt)
{
	int i = -1;

	while(++i < 10)
	{
		if(txt[i])
		{
			if(i == 9)
				std::cout << ".";
			else
				std::cout << txt[i];
		}
		else
			std::cout << " ";
	}
	return ;
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
		std::cout << list[i].get_id() << "         ";
		std::cout << "|";
		ft_print_10(list[i].get_f_name());
		std::cout << "|";
		ft_print_10(list[i].get_l_name());
		std::cout << "|";
		ft_print_10(list[i].get_n_name());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while(true)
	{
		std::cout << "Introduce el id del contacto" << std::endl;
		std::cout << "> ";
			if (std::getline(std::cin, input).rdstate() == 0)
				if (!input.empty() && input.length() == 1)
					if(input.find_first_not_of("12345678") == std::string::npos)
						if((i = std::stoi(input)) <= len)
							break ;
			std::cout << "\033[1;31m Invalid ID\033[0m" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << " * First name: " << list[i - 1].get_f_name() << std::endl;
	std::cout << " * Last name: " << list[i - 1].get_l_name() << std::endl;
	std::cout << " * Nickname: " << list[i - 1].get_n_name() << std::endl;
	std::cout << " * Phone number: " << list[i - 1].get_p_number() << std::endl;
	std::cout << " * Darkest secret:"<< list[i - 1].get_secret() << std::endl;
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