#include "PhoneBook.hpp"
#include "Contact.hpp"

//infos must not be empty + phonenum must be digits

PhoneBook::PhoneBook()
{
    num=0;
    numContacts=0;
}

int   PhoneBook::getValidPosition()
{
    if(numContacts < SIZE)
        numContacts++;
    if(num == SIZE)
    	num=0;
    return num;
}

bool isAllDigits(std::string str)
{
	int i = 0;
	while(i< str.length()){
		if(!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}
void PhoneBook::ADD()
{
    std::string LastName;
    std::string FirstName;
    std::string NickName;
    std::string DarkestSecret;
    std::string PhoneNum;
    
    std::cout << "Please enter the First Name : ";
    std::getline(std::cin, FirstName);
    while(FirstName.empty()){
		std::cout << "Invalid input , please enter the First Name : ";
		std::getline(std::cin, FirstName);
    }

    std::cout << "Please enter the Last Name : ";
    std::getline(std::cin, LastName);
    while(LastName.empty()){
		std::cout << "Invalid input , please enter the Last Name : ";
		std::getline(std::cin, LastName);
    }

	std::cout << "Please enter the NickName : ";
    std::getline(std::cin, NickName);
    while(NickName.empty()){
		std::cout << "Invalid input , please enter the NickName : ";
		std::getline(std::cin, NickName);
    }

	std::cout << "Please enter the DarkestSecret : ";
   std::getline(std::cin, DarkestSecret);
    while(DarkestSecret.empty()){
		std::cout << "Invalid input , please enter the DarkestSecret : ";
		std::getline(std::cin, DarkestSecret);
    }

	std::cout << "Please enter the PhoneNumber : ";
    std::getline(std::cin, PhoneNum);
	while(PhoneNum.empty() || !isAllDigits(PhoneNum) || PhoneNum.length() < 10){
		std::cout << "Invalid input , please enter a valid Phone number : ";
		std::getline(std::cin, PhoneNum);
	}

   	list[getValidPosition()]=Contact(LastName,FirstName,NickName,DarkestSecret,PhoneNum);
    num++;

	 std::cout << "Contact added successfully!" << std::endl;
}
std::string resize(std::string var)
{
	if(var.length() < 10)
	{
		return var + std::string(10 - var.length(), ' ');
	}
	else
	{
		return var.substr(0, 9) + '.';
	}
}
void PhoneBook::SEARCH()
{
	int i = 0;

	std::cout << "----------- ---------- ---------- ----------" << std::endl;
	std::cout << "|index     |firstName |lastName  |nickName  | " << std::endl;
	std::cout << "----------- ---------- ---------- ----------" << std::endl;
	while(i < numContacts)
	{
		std::cout << "|" << resize(std::to_string(i)) << "|" << resize(list[i].FirstName) << "|" << resize(list[i].LastName) << "|" << resize(list[i].NickName) << "|" << std::endl;
		std::cout << " ---------- ---------- ---------- ----------" << std::endl;
		i++;
	}
}
