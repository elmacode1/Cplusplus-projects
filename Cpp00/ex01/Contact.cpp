
#include "Contact.hpp"

Contact::Contact( void )
{}

Contact::Contact(std::string fName, std::string lName,
                 std::string nName, std::string phoneNum,
                 std:: string dark) {
	firstName = fName;
	lastName = lName;
	nickname = nName;
	phoneNumber = phoneNum;
	darkestSecret = dark;
}
bool Contact::isEmpty(void) const {
	return firstName.empty();
}