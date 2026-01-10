#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cctype> 

#define SIZE 3

class PhoneBook {
	public :
		Contact list[SIZE];
		int numContacts;
		int num;

		PhoneBook();
		void ADD();
		void SEARCH();
		void EXIT();
		int getValidPosition();
};
#endif
