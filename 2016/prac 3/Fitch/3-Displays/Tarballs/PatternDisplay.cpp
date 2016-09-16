#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size: ";
	cin >> size;
	if (size < 0 || size > 20)
	{
		cout << "We do not cater for patterns with negative or very large size\n";
		return 0;
	}
	cout << setw(40) << setfill('-') << '-' << endl;
	cout << "Pattern A" << endl;
	cout << setw(40) << setfill('-') << '-' << endl;

	for (int x = 1; x <= size; x++) {
		cout << setw(x) << setfill('+') << '+' << endl;
	}

	cout << setw(40) << setfill('-') << '-' << endl;
	cout << "Pattern B" << endl;
	cout << setw(40) << setfill('-') << '-' << endl;

	for (int x = size; x > 0; x--) {
		cout << setw(x) << setfill('+') << '+' << endl;
	}

	cout << setw(40) << setfill('-') << '-' << endl;

	return 0;
}