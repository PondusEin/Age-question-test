#include <iostream>
#include <string>
#include <conio.h>
int user_age;


int main()
{
	std::cout << "How old are you?\n";
	std::cin >> user_age;


	if (user_age >= 20) {
		std::cout << "Wow, you're an adult!";
	}
	else {
		std::cout << "Wowie, you're a kid!\nFuck off.";
	}
	char s = _getch();
}