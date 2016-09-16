#include <iostream>
#include <string>

int main()
{
	using namespace std;
	
	int age;
	string name;
	
	cout << "Goodday!!! "<< endl;
	cout << "What is your name? ";
	cin >> name;
	cout << "What is your age? ";
	cin >> age;
	cout << "Access is granted to " << name << " (aged " << age << ")."<< endl;

	
	return 0;
}
