#include <iostream>
#include "contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

Contact::Contact(int index, std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname) {
	this->index = index;
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->PhoneNumber = PhoneNumber;
	this->Nickname = Nickname;
}

void	Contact::SetValue(std::string str, int index) {
	if (index == 0)
		this->FirstName = str;
	else if (index == 1)
		this->LastName = str;
	else if (index == 2)
		this->PhoneNumber = str;
	else if (index == 3)
		this->Nickname = str;
}

std::string	Contact::GetValue(int index) {
	if (index == 0)
		return this->FirstName;
	else if (index == 1)
		return this->LastName;
	else if (index == 2)
		return this->PhoneNumber;
	else if (index == 3)
		return this->Nickname;
	return NULL;
}
