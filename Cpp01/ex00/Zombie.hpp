#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce (void);
};
        //standalone funcs, because we dont need to access class data
        void randomChump (std::string name);
        Zombie* newZombie (std::string name);
#endif 
