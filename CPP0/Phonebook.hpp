#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact list[8];

    public:
        Phonebook();
        ~Phonebook();
        void add_nodo(Contact nodo)
};

#endif