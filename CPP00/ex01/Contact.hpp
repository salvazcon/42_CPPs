#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	p_number;
		std::string	secret;
		int			id;

	public:
		Contact();
		Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string secret);
		~Contact();
		void		set_id(int newid);
		int			get_id();
		std::string	get_f_name(void);
		std::string	get_l_name(void);
		std::string	get_n_name(void);
		std::string	get_p_number(void);
		std::string	get_secret(void);
};

#endif