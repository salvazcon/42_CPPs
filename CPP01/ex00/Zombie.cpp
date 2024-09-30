# include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << this->name << " was slayed" << std::endl;
}

Zombie::Zombie(void){}

Zombie::Zombie(std::string name): name(name){}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}