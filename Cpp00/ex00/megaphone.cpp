#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
	if(ac > 1)
	{
		for(int j=1; j < ac; j++)
		{
			std::string str=av[j];
			for(size_t i=0; i < str.length();i++)
			{
				str[i]=std::toupper(str[i]);
				std::cout << str[i];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
