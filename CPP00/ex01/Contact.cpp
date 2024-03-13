#include "Contact.hpp"

Contact::Contact(void)
{
	f_name = "";
	l_name = "";
	n_name = "";
	p_number = "";
	secret = "";
	id = 0;
	return;
}

Contact::~Contact(void){
	return;
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string secret)
{
	this->f_name = f_name;
	this->l_name = l_name;
	this->n_name = n_name;
	this->p_number = p_number;
	this->secret = secret;
	this->id = 0;
	return;
}

void		Contact::set_id(int id){ this->id = id; } //cambie esto, estaria bien???

int			Contact::get_id(){ return(id); }

std::string	Contact::get_f_name(void){ return (f_name); }

std::string	Contact::get_l_name(void){ return (l_name); }

std::string	Contact::get_n_name(void){ return (n_name); }

std::string	Contact::get_p_number(void){ return (p_number); }

std::string	Contact::get_secret(void){ return (secret); }