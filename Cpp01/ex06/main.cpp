#include "Harl.hpp"

int main(int ac, char **av){
    if(ac != 2){
        std::cout << "Not valid!" << std::endl;
        return 1;
    }

    Harl person;
    person.complain(av[1]);
}