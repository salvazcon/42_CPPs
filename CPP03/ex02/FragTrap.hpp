#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
        ~FragTrap();
		FragTrap(void);
        FragTrap(std::string name);
		FragTrap(const FragTrap &cp);
		FragTrap& operator=(const FragTrap &other);
		void highFivesGuys();
};

#endif