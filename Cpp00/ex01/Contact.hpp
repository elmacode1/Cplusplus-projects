#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public :
		int PhoneNum;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkestSecret;

		Contact();
		Contact(int PhoneNum,std::string FirstName,std::string LastName,
			std::string NickName,std::string DarkestSecret);
};

#endif