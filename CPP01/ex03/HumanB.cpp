#include "HumanB.hpp"

HumanB::~HumanB (){ return; }

HumanB::HumanB (std::string name): name(name), weapon(NULL){}

void HumanB::attack()
{
    if (!this->weapon)
        std::cout << name << " has no weapon." << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}