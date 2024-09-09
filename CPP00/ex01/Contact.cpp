#include "Contact.hpp"

Contact::~Contact(void){
	return;
}

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

std::string	Contact::getFname(void){ return (this->f_name); }

std::string	Contact::getLname(void){ return (this->l_name); }

std::string	Contact::getNname(void){ return (this->n_name); }

std::string	Contact::getPnumber(void){ return (this->p_number); }

std::string	Contact::getSecret(void){ return (this->secret); }

int			Contact::getId(){ return(this->id); }

void		Contact::setId(int id){ this->id = id; }