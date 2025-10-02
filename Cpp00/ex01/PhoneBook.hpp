#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public :
		Contact list[8];
		int numContacts;
	public :
		void ADD();
		void SEARCH();
		void EXIT();
};

#endif