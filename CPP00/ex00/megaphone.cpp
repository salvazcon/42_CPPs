#include <iostream>

char To_Upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}

int main(int argc, char* argv[])
{
	char c;
	int i;
	int j;

	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
			{
				c = To_Upper(argv[i][j]);
				std::cout << c;
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}