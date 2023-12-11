#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
}

PhoneBook::~PhoneBook(void) {
}

void	PhoneBook::SetValue(int index, Contact contact) {
	this->Contacts[index] = contact;
}

Contact	PhoneBook::GetValue(int index) {
	return this->Contacts[index];
}

