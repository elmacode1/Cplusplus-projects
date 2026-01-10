#include "Contact.hpp"

Contact::Contact(){

}
Contact::Contact(std::string LastName,std::string FirstName,
std::string NickName,std::string DarkestSecret,std::string PhoneNum){
    this->LastName = LastName;
    this->FirstName = FirstName;
    this->NickName = NickName;
    this->DarkestSecret = DarkestSecret;
    this->PhoneNum = PhoneNum;
}
