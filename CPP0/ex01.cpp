#ifndef EX1_HPP
# define EX1_HPP

private:
    std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	p_number;
	std::string	secret;
	int			id;

public:
    contact();
    Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string secret);

#endif