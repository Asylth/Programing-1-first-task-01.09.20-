#include <iostream>
#include <string>

int user_age;

int main()
{
	std::cout << "What is your age: \n";
	//std::getline(std::cin, user_age); did not work for some reason
	std::cin >> user_age;
	if (user_age >= 20)
	{
	std::cout << "You are an adult \n";
	}
	if (user_age < 20)
	{
	std::cout << "You are a teenager \n";
	}
	
}
