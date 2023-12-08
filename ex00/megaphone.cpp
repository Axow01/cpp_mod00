#include <iostream>

static bool ft_isalpha(int n) {
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return true;
	return false;
}

static char	ft_toupper(int n) {
	if (ft_isalpha(n) && n >='a' && n <= 'z')
		n -= 32;
	return (char)n;
}

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}

	for (int i = 1; i < argc; i++) {
		for (int b = 0; argv[i][b]; b++) {
			std::cout << ft_toupper((int) argv[i][b]);
		}
	}
	std::cout << '\n';
	return 0;
}
