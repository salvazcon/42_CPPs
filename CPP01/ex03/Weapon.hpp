#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "iostream"
# include "string"

class Weapon
{
	private:
		std::string type;

	public:
		~Weapon( void );
		Weapon( void );
		Weapon(std::string type);
		const std::string &getType();
		void	setType(std::string type); 
};


#endif