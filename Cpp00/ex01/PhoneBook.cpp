#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void) {
	contactCount = 0;
	oldestIndex = 0;
}
bool PhoneBook::isValidNumber(std::string str) {
	if (str.empty())
		return false;
	
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}
std::string PhoneBook::truncate(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::displayTable(void) {
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std:: setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std:: cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	for (int i = 0; i < 8; i++) {
		if (contacts[i].isEmpty())
			continue;
		
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contacts[i]. firstName) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].lastName) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].nickname) << std::endl;
	}
}

void PhoneBook::displayContactDetails(int index) {
	if (index < 0 || index >= 8 || contacts[index].isEmpty()) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	std::cout << "\n--- Contact Details ---" << std::endl;
	std::cout << "First Name:       " << contacts[index]. firstName << std::endl;
	std::cout << "Last Name:        " << contacts[index].lastName << std::endl;
	std::cout << "Nickname:        " << contacts[index].nickname << std::endl;
	std::cout << "Phone Number:    " << contacts[index].phoneNumber << std:: endl;
	std::cout << "Darkest Secret:  " << contacts[index].darkestSecret << std::endl;
	std::cout << std::endl;
}

void PhoneBook::addContact(void) {
	std::string input;

	std::cout << "\n--- ADD NEW CONTACT ---\n" << std::endl;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Field cannot be empty! First Name: ";
		std::getline(std::cin, input);
	}
	std::string firstName = input;

	std:: cout << "Last Name: ";
	std::getline(std:: cin, input);
	while (input.empty()) {
		std::cout << "Field cannot be empty! Last Name: ";
		std::getline(std::cin, input);
	}
	std::string lastName = input;

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Field cannot be empty! Nickname: ";
		std::getline(std::cin, input);
	}
	std::string nickname = input;
	
	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	while (input.empty() || !isValidNumber(input)) {
		std::cout << "Invalid phone number! Phone Number: ";
		std::getline(std:: cin, input);
	}
	std::string phoneNumber = input;
	
	std::cout << "Darkest Secret: ";
	std::getline(std:: cin, input);
	while (input.empty()) {
		std::cout << "Field cannot be empty! Darkest Secret: ";
		std::getline(std:: cin, input);
	}
	std::string darkestSecret = input;
	contacts[oldestIndex] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	oldestIndex = (oldestIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
	std::cout << "\n✓ Contact added successfully!\n" << std::endl;
}

void PhoneBook::searchContact(void) {
	if (contactCount == 0) {
		std::cout << "\nPhoneBook is empty!\n" << std::endl;
		return;
	}
	std::cout << "\n--- SEARCH CONTACTS ---\n" << std::endl;
	displayTable();
	std::cout << "\nEnter index to view details: ";
	std::string input;
	std:: getline(std::cin, input);
	if (input.length() != 1 || input[0] < '0' || input[0] > '7') {
		std::cout << "Invalid index! Must be 0-7\n" << std::endl;
		return;
	}
	int index = input[0] - '0';
	displayContactDetails(index);
}