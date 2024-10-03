#!/bin/bash
echo ""
echo -e "\e[93m████████╗██╗░░██╗███████╗  ░█████╗░██████╗░███████╗░█████╗░████████╗░█████╗░██████╗░"
echo -e "╚══██╔══╝██║░░██║██╔════╝  ██╔══██╗██╔══██╗██╔════╝██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗"
echo -e "░░░██║░░░███████║█████╗░░  ██║░░╚═╝██████╔╝█████╗░░███████║░░░██║░░░██║░░██║██████╔╝"
echo -e "░░░██║░░░██╔══██║██╔══╝░░  ██║░░██╗██╔══██╗██╔══╝░░██╔══██║░░░██║░░░██║░░██║██╔══██╗"
echo -e "░░░██║░░░██║░░██║███████╗  ╚█████╔╝██║░░██║███████╗██║░░██║░░░██║░░░╚█████╔╝██║░░██║"
echo -e "░░░╚═╝░░░╚═╝░░╚═╝╚══════╝  ░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝░░░╚═╝░░░░╚════╝░╚═╝░░╚═╝\e[0m"
echo ""

echo -e "Introduce el nombre de la clase: \e[93m\c\e[0m."
read NAME
while [ -z "$NAME" ]
do
	echo -e "\e[0mEL nombre de la variable esta vacio, \e[93mMete un puto valor subnormal !!!\e[0m"
    echo -e "Introduce el nombre de la clase: \e[93m\c\e[0m"
    read NAME
done
echo -e "\e[0mA continuacion se creara la clase \e[93m$NAME\e[0m."
touch $NAME.hpp $NAME.cpp
if [ -e "$NAME.hpp" ] && [ -e "$NAME.hpp" ]; then
    echo -e "Los archivos \e[93m'.hpp'\e[0m y \e[93m'.cpp'\e[0m de la clase han sido creados."
else
{
    echo -e "\e[93m¡WARNMING!!\e[0m Error en la creacion de los archivos."
    exit 1
}
fi
echo -e "Ya cuenta con la estructura básica en los archivos de su clase \e[93m$NAME\e[0m."
echo "#ifndef  ${NAME^^}_HPP
# define  ${NAME^^}_HPP

#include <iostream>
#include <string>

class $NAME
{
    protected:
    
    private:
    
    public:
        $NAME( void );
        ~$NAME();
        $NAME(const $NAME &cp);
		$NAME& operator=(const $NAME &other);
    
};

#endif" >  $NAME.hpp

echo "#include \"$NAME.hpp\"

$NAME::~$NAME()
{
    std::cout << \"$NAME destructor called\" << std::endl;
    return ;
}

$NAME::$NAME( void )
{
    std::cout << \"$NAME constructor called\" << std::endl;
    return ;
}

$NAME& $NAME::operator=(const $NAME &other)
{
    ... (<-- Datos a copiar.)
	std::cout << "$NAME copy assignment operator called" << std::endl;
	return *this;
}

$NAME::$NAME(const $NAME &cp)
{
	std::cout << "$NAME copy constructor called" << std::endl;
	*this = cp;
}
" > $NAME.cpp