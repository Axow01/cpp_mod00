#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void SetValue(int index, Contact contact);
		Contact GetValue(int index);
	private:
		Contact Contacts[8];
};
