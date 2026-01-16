
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook {

private:
	Contact contacts[8];
	int     contactCount;
	int     oldestIndex;
	std::string truncate(std::string str);
	void        displayTable(void);
	void        displayContactDetails(int index);
	bool        isValidNumber(std::string str);

public:
	PhoneBook(void);
	void addContact(void);
	void searchContact(void);
};

#endif

