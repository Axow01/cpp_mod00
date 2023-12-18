#include <iostream>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		Contact(int index, std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname, std::string DarkestSecret);
		void SetValue(std::string str, int index);
		void SetIndex(int index);
		int GetIndex(void);
		std::string GetValue(int index);
	private:
		int			index;
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string Nickname;
		std::string DarkestSecret;
};
