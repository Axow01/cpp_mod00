#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	for (int i = 0; i < 8; i++) {
		Contact buffer = this->GetValue(i);
		buffer.SetIndex(0);
		this->SetValue(i, buffer);
	}
}

PhoneBook::~PhoneBook(void) {
}

void	PhoneBook::SetValue(int index, Contact contact) {
	this->Contacts[index] = contact;
}

Contact	PhoneBook::GetValue(int index) {
	return this->Contacts[index];
}

