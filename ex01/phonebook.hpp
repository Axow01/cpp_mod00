#include <iostream>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string OtherInfo);
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string OtherInfo;
};

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(Contact contact);
		int		index;
		Contact Contacts[8];
};
