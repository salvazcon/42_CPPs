
#include "Contact.hpp"

Contact::Contact()
{
    f_name = "";
    l_name = "";
    n_name = "";
    p_number = "";
    secret = "";
    id = 0;
    return;
}

Contact::~Contact(){
    return:
};

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string secret)
{
    f_name = f_name;
    l_name = l_name;
    n_name = n_name;
    p_number = p_number;
    secret = secret;
    id = 0;
    return;
}

void    Contact::Set_id(int id){ this->id = id; } //cambie esto, estaria bien???

int Contact::Get_id(){ return(id); }