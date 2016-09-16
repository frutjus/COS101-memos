#include <iostream>
#include <iomanip>

using namespace std;

int main() 

{
	const float DOLLAR_PER_RAND = 0.05917, EURO_PER_RAND = 0.05681;
	double rands, dollar_amount, euro_amount;
	
		
	cout << "Please enter Rand amount : ";
	cin >> rands;
	
	dollar_amount = rands * DOLLAR_PER_RAND;
	euro_amount = rands * EURO_PER_RAND;
	
	cout << setprecision(2) << fixed << showpoint;
	cout << rands << " Rand(s) = " << dollar_amount << " Dollar(s)" << endl;
	cout << rands << " Rand(s) = " << euro_amount << " Euro(s)" << endl;
	
	return 0;
	
}