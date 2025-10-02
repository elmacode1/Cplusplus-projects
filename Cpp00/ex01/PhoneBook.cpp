#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

//infos must not be empty + phonenum must be digits

PhoneBook::PhoneBook()
{
    num=0;
    numContacts=0;
}

int   PhoneBook::getValidPosition()
{
    if(numContacts < 9)
        numContacts++;
    if(num == 9)
    num==0;
    return num;
}
void PhoneBook::ADD()
{
    std::string LastName;
    std::string FirstName;
    std::string NickName;
    std::string DarkestSecret;
    std::string PhoneNum;
    
    std::cout << "Please enter the First Name : ";
    std::cin >> FirstName;
    if(FirstName.empty()){

    }
     std::cout << "Please enter the Last Name : ";
    std::cin >> LastName;


    contact[getValidPosition()]=Contact(LastName,FirstName,NickName,DarkestSecret,PhoneNum);
    num++;
}
void PhoneBook::SEARCH()
{

}