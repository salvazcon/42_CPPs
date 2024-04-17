#!/bin/bash
echo ""
echo -e "\e[93m████████╗██╗░░██╗███████╗  ░█████╗░██████╗░███████╗░█████╗░████████╗░█████╗░██████╗░"
echo -e "╚══██╔══╝██║░░██║██╔════╝  ██╔══██╗██╔══██╗██╔════╝██╔══██╗╚══██╔══╝██╔══██╗██╔══██╗"
echo -e "░░░██║░░░███████║█████╗░░  ██║░░╚═╝██████╔╝█████╗░░███████║░░░██║░░░██║░░██║██████╔╝"
echo -e "░░░██║░░░██╔══██║██╔══╝░░  ██║░░██╗██╔══██╗██╔══╝░░██╔══██║░░░██║░░░██║░░██║██╔══██╗"
echo -e "░░░██║░░░██║░░██║███████╗  ╚█████╔╝██║░░██║███████╗██║░░██║░░░██║░░░╚█████╔╝██║░░██║"
echo -e "░░░╚═╝░░░╚═╝░░╚═╝╚══════╝  ░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝░░░╚═╝░░░░╚════╝░╚═╝░░╚═╝\e[0m"
echo ""

i=0
while [ "$i" -lt "$#" ]; do
    i=$((i + 1))
    NAME=${!i}
    echo -e "\e[0mA continuacion se creara la clase \e[93m$NAME\e[0m."
    touch $NAME.hpp $NAME.cpp
    if [ -e "$NAME.hpp" ] && [ -e "$NAME.hpp" ]; then
        echo -e "Los archivos \e[93m'.hpp'\e[0m y \e[93m'.cpp'\e[0m de la clase han sido creados."
    else
        echo -e "\e[93m¡WARNMING!!\e[0m Error en la creacion de los archivos."
        exit 1
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
    
}

#endif;" >  $NAME.hpp

    echo "#include \"$NAME.hpp\"

$NAME::~$NAME()
{
    std::cout << \"$NAME Destructor called\" << std::endl;
    return ;
}

$NAME::$NAME( void )
{
    std::cout << \"$NAME Constructor called\" << std::endl;
    return ;
}" > $NAME.cpp
done
if [ "$#" -eq "0" ]; then
    echo -e "Errro: No se han recibido parametro para la creacion de clases"
    echo -e "\e[93mSi no metes argumentos te quedas sin clases mogolo !!!\e[0m\n"
fi