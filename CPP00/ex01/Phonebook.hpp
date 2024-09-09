#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact	list[8];
		int		len;

	public:
		~Phonebook(void);
		Phonebook(void);
		Contact	*get_list(void);
		int		get_len(void);
		void	add_nodo(Contact nodo);
};

#endif