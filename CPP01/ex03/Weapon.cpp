#include "Weapon.hpp"

Weapon::~Weapon(void){ return; }

Weapon::Weapon(void) { return; }

Weapon::Weapon(std::string type): type(type){}

void    Weapon::setType(const std::string type){ this->type = type; }

const std::string 	&Weapon::getType(){ return (type); }