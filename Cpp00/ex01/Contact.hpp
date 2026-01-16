#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	Contact(std::string fName, std::string lName,
	        std::string nName, std::string phoneNum, 
	        std::string dark);
	
	Contact( void );
	bool isEmpty(void) const;
};

#endif