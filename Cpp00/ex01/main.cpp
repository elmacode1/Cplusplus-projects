#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void) {
	PhoneBook phoneBook;
	std::string command;
	
	std::cout << "\n╔═══════════════════════════════╗" << std::endl;
	std::cout << "║  MY AWESOME PHONEBOOK         ║" << std::endl;
	std::cout << "╚═══════════════════════════════╝\n" << std::endl;
    	
	while (true) {
        std::cout << "Please choose an option: [ADD], [SEARCH], [EXIT]\n" << std::endl;
		std::cout << ">";
		std::getline(std::cin, command);
		
		if (std::cin.eof()) {
			std::cout << "\nEOF detected. Exiting...\n" << std::endl;
			break;
		}
		if (command == "ADD") {
			phoneBook.addContact();
		}
		else if (command == "SEARCH") {
			phoneBook.searchContact();
		}
		else if (command == "EXIT") {
			std::cout << "\nSee you next time!  👋\n" << std::endl;
			break;
		}
		else if (! command.empty()) {
			std::cout << "Invalid command!" << std::endl;
		}
	}
	return 0;
}
