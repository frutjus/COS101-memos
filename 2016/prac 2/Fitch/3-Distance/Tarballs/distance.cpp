#include <iostream>		
using namespace std;
	
const double speed = 120.0; 

int main()				
{		 
	double distance = 0.0;
	double hours;		
	cout << "Enter number of hours travelled";
	cin >> hours;				
	distance = hours * speed; 				
	cout << distance << "\n";				
	return 0;
}
