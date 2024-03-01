
#include "Phonebook.hpp"

Phonebook::Phonebook{
    return;
}

Phonebook::~Phonebook{
    return;
}

void    Phonebook::add_nodo(Contact nodo)
{
	static int i = 0;

	if (i == 8)
		i = 0;
	list[i] = nodo;
	list[i].setid(i + 1);
	/* if (len < 8)
		len++; //actualmente no se para que quiere la 'len' */
	i++;
}
