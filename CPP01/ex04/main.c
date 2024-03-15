#include "replace.hpp"

int	main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::string w_old = argv[2];
        std::string w_new = argv[3];
        if (w_old.empty() || w_new.empty())
        {
            std::cout << "Invalid number of arguments." << std::endl;
            return 1;
        }
        std::ifstream infile(argv[1]);
        if (!infile.is_open())
            std::cout << "Invalid file." << std::endl;
        else
        {
            std::string		ext = ".replace";
            std::string		filename = argv[1] + ext;
            std::ofstream	outfile(filename.c_str(), std::ios::binary); //cambia el string a const char *
            std::string line = "";
            while (std::getline(infile, line))
            {
                std::size_t i = 0;
                while (i < line.length())
                {
                    i = line.find(w_old);
                    if (i >= line.length())
			            break;
                    line.erase(i, w_old.length());
                    line.insert(i, w_new);
                }
                outfile << line << std::endl;
            }
            outfile.close();
            infile.close();
            return 0;
        }
        return 1;
    }
    std::cout << "Invalid number of arguments." << std::endl;
    return 1;
}