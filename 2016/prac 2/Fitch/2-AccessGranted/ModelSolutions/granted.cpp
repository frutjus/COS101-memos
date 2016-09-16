#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	double age;
	cout << "Goodday!!!\n";
	cout << "What is your name? ";
	cin >> name;
	cout << "What is your age? ";
	cin >> age;
	cout << "Access is granted to " << name << " (aged " << age << ").\n";
	return 0;
}