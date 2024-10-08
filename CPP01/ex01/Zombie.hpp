#ifndef Zombie_HPP
# define Zombie_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	~Zombie(void);
	Zombie(void);
	Zombie(std::string name);
	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif