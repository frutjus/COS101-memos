#include <iostream>
#include <string>
using namespace std;

int main()
{
	double mark;	
	
	cout << "Enter your mark: ";
	cin >> mark;

	if (mark < 0 || mark > 100 )
		cout << "You have inserted an invalid mark" << endl;

	else if (mark >= 75 )
		cout << "Well done , you have gotten a distinction!" << endl;

	else if (mark >= 50 )
		cout << ", you have Passed!" << endl;

	else if (mark >= 40 )
		cout << "Oops , you have gotten a supplementary!" << endl;

	else
		cout << "You tried, , you have FAILED!" << endl;
 
	return 0;
}
