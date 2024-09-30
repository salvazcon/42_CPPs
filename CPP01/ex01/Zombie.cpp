#include "Zombie.hpp"

Zombie::~Zombie() 
{
	std::cout << "Zombie " << this->name << " deztroyed" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie" << " createz" << std::endl;
}

Zombie::Zombie(std::string name): name(name) 
{
	std::cout << "Zombie " << this->name << " createz" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}