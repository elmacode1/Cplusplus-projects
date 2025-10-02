#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
	public :
        std::string LastName;
        std::string FirstName;
        std::string NickName;
        std::string DarkestSecret;
        std::string PhoneNum;

        Contact();
        Contact(std::string LastName,std::string FirstName,
            std::string NickName,std::string DarkestSecret,std::string PhoneNum);
};

#endif