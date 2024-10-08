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
		~Contact();
		Contact();
		Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string secret);
		std::string	getFname(void);
		std::string	getLname(void);
		std::string	getNname(void);
		std::string	getPnumber(void);
		std::string	getSecret(void);
		int			getId();
		void		setId(int newid);
};

#endif