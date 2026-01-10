#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
    PhoneBook list;
    std::string read;
	int i=0;
    std::cout << "Welcome! ";
    while(1){
        std::cout << "please choose an option: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, read);
        if(read == "ADD")
            list.ADD();
        else if(read == "SEARCH")
            list.SEARCH();
        else if(read == "EXIT"){
			std::cout<< "See you next time!!" << std::endl;
			break;
		}
    }
}
