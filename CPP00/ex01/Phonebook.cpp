#include "Phonebook.hpp"

Phonebook::Phonebook(void){
	len = 0;
	return;
}

Phonebook::~Phonebook(void){
	return;
}

void	Phonebook::add_nodo(Contact nodo)
{
	static int i = 0;

	if (i == 8)
		i = 0;
	list[i] = nodo;
	list[i].set_id(i + 1);
	if (len < 8)
		len++; //el valor length o size no existe en caso de ser un objeto creadp dese 0
	i++;
}

Contact	*Phonebook::get_list(void){ return (list); } //aqui le meto el puntero para que me de por culisimo

int	Phonebook::get_len(void){ return (len); }