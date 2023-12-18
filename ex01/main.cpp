#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

std::string	PromptUser(std::string prompt) {
	std::string x;
	std::cout << prompt;
	if (!std::getline(std::cin, x))
		exit(1);
	return x;
}

Contact	CreateNewContact(int index) {
	Contact c;

	c.SetIndex(index + 1);
	c.SetValue(PromptUser("First name: "), 0);
	c.SetValue(PromptUser("Last name: "), 1);
	c.SetValue(PromptUser("PhoneNumber: "), 2);
	c.SetValue(PromptUser("Nickname: "), 3);
	c.SetValue(PromptUser("Darkest Secret: "), 4);
	return c;
}

void	PrintContactDetailled(Contact contact) {
	std::cout << "INDEX: " << contact.GetIndex() << std::endl;
	std::cout << "FIRST NAME: " << contact.GetValue(0) << std::endl;
	std::cout << "LAST NAME: " << contact.GetValue(1) << std::endl;
	std::cout << "PHONE NUMBER: " << contact.GetValue(2) << std::endl;
	std::cout << "NICKNAME: " << contact.GetValue(3) << std::endl;
	std::cout << "DARKEST SECRET: " << contact.GetValue(4) << std::endl;
}

std::string	PrintContactLine(std::string str) {
	if (str.length() > 10)
		str[9] = '.';
	return str.substr(0, 10);
}

void	PrintContact(Contact contact) {
	if (contact.GetIndex() == 0)
		return;
	std::cout << "|" << std::setw(10) << contact.GetIndex() << "|";
	std::cout << std::setw(10) << PrintContactLine(contact.GetValue(0)) << "|";
	std::cout << std::setw(10) << PrintContactLine(contact.GetValue(1)) << "|";
	std::cout << std::setw(10) << PrintContactLine(contact.GetValue(3)) << "|" << std::endl;
}

void	SearchFunctionality(PhoneBook pb) {
	int index;
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i < 8; i++) {
		PrintContact(pb.GetValue(i));
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::string str = PromptUser("Index> ");
	for (int b = 0; str[b]; b++) {
		if (isdigit(str[b]) == 0) {
			std::cout << "ERROR: The input is not a digit!" << std::endl;
			return;
		}
	}
	if (!str.empty())
		index = std::stoi(str);
	for (int i = 0; i < 8; i++) {
		if (index <= 0)
			break;
		if (pb.GetValue(i).GetIndex() == index) {
			PrintContactDetailled(pb.GetValue(i));
			return;
		}
	}
	std::cout << "ERROR: The index specified was not found!" << std::endl;
}

bool	checkContactEmpty(Contact c) {
	for (int i = 0; i <= 4; i++) {
		if (c.GetValue(i).empty()) {
			std::cout << "ERROR: Missing contact informations!" << std::endl;
			return false;
		}
	}
	return true;
}

int	main(void) {
	std::string UsrCmd;
	int index = 0;
	PhoneBook pb;

	std::cout << "USABLE CMD: ADD, SEARCH, EXIT" << std::endl;
	while (true) {
		if (index >= 8)
			index = 0;
		UsrCmd = PromptUser("PhoneBook> ");
		if (UsrCmd.compare("EXIT") == 0)
			break;
		else if (UsrCmd.compare("ADD") == 0) {
			Contact c = CreateNewContact(index);
			if (checkContactEmpty(c))
				pb.SetValue(index, c);
			index++;
		}
		else if (UsrCmd.compare("SEARCH") == 0)
			SearchFunctionality(pb);
	}
	return 0;
}
