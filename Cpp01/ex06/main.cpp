#include "Harl.hpp"

int main(int ac, char **av){
    if(ac != 2){
        std::cout << "Try again!" << std::endl;
        return 1;
    }

    Harl person;
    person.complain(av[1]);
}