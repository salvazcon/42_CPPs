#include "Phonebook.hpp"

Phonebook::~Phonebook(void){
	return;
}

Phonebook::Phonebook(void){
	len = 0;
	return;
}

void	Phonebook::add_nodo(Contact nodo)
{
	static int i = 0;

	if (i == 8)
		i = 0;
	list[i] = nodo;
	list[i].setId(i + 1);
	if (len < 8)
		len++;
	i++;
}

Contact	*Phonebook::get_list(void){ return (list); }

int	Phonebook::get_len(void){ return (len); }