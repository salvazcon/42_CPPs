#include "iostream":

/* void    ft_search()
{
    std::string	input = "";
} */

int    ft_parser_add(std::string	input[5])
{
    int i = -1;

    while(input[++i])
    {
        if(input.lenght() == 0)
            return 1;
        if(i == 3 && input.isDigit())
            return 1;
    }
    return 0;
}

void    ft_add(Phonebook *p_list)
{
    std::string	input[5];

    std::cout << "First name:"
    std::cin << input[0];
    std::cout << "Last name:"
    std::cin << input[1];
    std::cout << "Nickname:"
    std::cin << input[2];
    std::cout << "Phone number:"
    std::cin << input[3];
    std::cout << "Darkest screte:"
    std::cin << input[4];
    if(ft_parser_aad(input[5]) != 0)
    {
        std::cout << "Datos invalidos, introduzcalos de nuevo";
        ft_add();
    }
    Contact nodo(input[0], input[1], input[2], input[3], input[4]);
    (*p.list).add_node(nodo);
}

int main()
{
	Phonebook p_list;
	std::string	input = "";

	std::cout << "insert comand: (ADD, SEARCH, EXIT):" << std::endl;
	while (1)
	{
		if (std::getline(std::cin, input).rdstate() != 0)
			return 1; //mejor exit??
		if (input == "EXIT")
            return 0;
        else if (input == "SEARCH")
			ft_search(&p_list);
		else if (input == "ADD")
			ft_add(&p_list);
	}
}