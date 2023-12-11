#include <iostream>
#include "phonebook.hpp"

std::string	PromptUser(std::string prompt) {
	std::string x;
	std::cout << prompt;
	std::cin >> x;
	return x;
}

Contact	CreateNewContact(void) {
	Contact c;

	c.SetValue(PromptUser("First name: "), 0);
	c.SetValue(PromptUser("Last name: "), 1);
	c.SetValue(PromptUser("PhoneNumber: "), 2);
	c.SetValue(PromptUser("Nickname: "), 3);
	return c;
}

int	main(void) {
	std::string UsrCmd;
	int	index = 0;
	PhoneBook pb;

	UsrCmd = PromptUser("PhoneBook> ");
	if (UsrCmd.compare("ADD") == 0)
		pb.SetValue(index++, CreateNewContact());
	return 0;
}
