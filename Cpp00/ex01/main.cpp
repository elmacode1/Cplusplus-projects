#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
    PhoneBook list;
    std::string read;
    std::cout << "Welcome";
    while(1){
        std::cout << "Please choose an option: ADD, SEARCH or EXIT";
        std::cin >> read;
        if(read == "ADD")
            list.ADD();
        else if(read == "SEARCH")
            list.SEARCH();
        else if(read == "EXIT")
             break;
    }
}
