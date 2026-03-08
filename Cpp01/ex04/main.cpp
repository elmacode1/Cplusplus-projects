#include <string>
#include <fstream>
#include <iostream>

void    write_in_file(std::string &s1, std::string &s2, std::string &line, std::ofstream &file)
{
    size_t  pos = 0;
    size_t  found;

    if (s1.empty())
    {
        file << line << std::endl;
        return ;
    }
    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        file << line.substr(pos, found - pos);
        file << s2;
        pos = found + s1.length();
    }
    file << line.substr(pos) << std::endl;
}
void sed(std::string filename, std::string s1, std::string s2)
{
    std::string rep_fileName = filename + ".replace";
    std::string line;
    std::ifstream myFile(filename.c_str());

    if(myFile.is_open())
    {
        std::ofstream file(rep_fileName.c_str());
        while(std::getline(myFile, line))
        {
            write_in_file(s1, s2, line, file);
        }
    }
}

int main(int ac, char **av){

    if (ac != 4)
        return 1;
    sed(av[1], av[2], av[3]);
}