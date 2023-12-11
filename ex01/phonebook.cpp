#include <iostream>
#include "phonebook.hpp"


PhoneBook::PhoneBook(void) {
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {
}

void PhoneBook::addContact(Contact contact) {
	this->Contacts[this->index++] = contact;
}

Contact::Contact(void){
}

Contact::~Contact(void){
}

Contact::Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string OtherInfo) {
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->PhoneNumber = PhoneNumber;
	this->OtherInfo = OtherInfo;
}


int main(void) {
	PhoneBook MyPhoneBook;
	Contact Jean("Jean", "Roger", "514-888-9999", "");

	MyPhoneBook.addContact(Jean);

	std::cout << "First name: " << MyPhoneBook.Contacts[0].FirstName << std::endl;
	return 0;
}
