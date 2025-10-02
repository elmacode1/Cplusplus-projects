#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>


class PhoneBook {
	public :
		Contact list[8];
		int numContacts;
		int num;

		PhoneBook();
		void ADD();
		void SEARCH();
		void EXIT();
		int getValidPosition();
};

#endif