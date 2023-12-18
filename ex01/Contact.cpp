#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

Contact::Contact(int index, std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname, std::string DarkestSecret) {
	this->index = index;
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->PhoneNumber = PhoneNumber;
	this->Nickname = Nickname;
	this->DarkestSecret = DarkestSecret;
}

void	Contact::SetIndex(int index) {
	this->index = index;
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
	else if (index == 4)
		this->DarkestSecret = str;
}

int	Contact::GetIndex(void) {
	return this->index;
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
	else if (index == 4)
		return this->DarkestSecret;
	return NULL;
}
