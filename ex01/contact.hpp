#include <iostream>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		Contact(int index, std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname);
		void SetValue(std::string str, int index);
		std::string GetValue(int index);
	private:
		int			index;
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string Nickname;
};
