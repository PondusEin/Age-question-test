#include <iostream>
#include <string>
int user_age;


int main()
{
	std::cout << "How old are you?\n";
	std::cin >> user_age;


	if (user_age >= 20) {
		std::cout << "Wow, you are an adult!";
	}
	if (user_age < 20) {
		std::cout << "Wowie, you're a kid!\n" << "Fuck off.";
	}
}