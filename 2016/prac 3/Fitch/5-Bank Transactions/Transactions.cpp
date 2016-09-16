#include <iostream>
#include<iomanip>


using namespace std;

int main() 

{
	float wNum, sum = 0;
	double deposit;
	const double maxInt = 1.5;

	cout << " " << endl;	
	cout << " How much would you like to deposit?: " << "R";
	cin >> deposit;
    
	cout << " " << endl;	
	cout << setw(10) << "R" << deposit << " was deposited into your bank account." << endl;
	cout << " " << endl;
	cout << " Your new bank balance is " << "R" << deposit * maxInt << " including an interest rate of R" << maxInt << "." << endl;
	cout << " " << endl;

    while 
	
	(deposit >= 10000) {     // test expression is always true
        
	cout << " Enter amount to withdraw: " << "R";
        cin >> wNum;
	cout << " " << endl;
        
        if (wNum >= deposit) {
            sum += wNum;
        }
        else {
            break;    // terminating the loop if number equals to 0
        }

  	}
    	cout << " Withdrawed amount = " << "R" << wNum << endl;
	cout << " " << endl;
	cout << " Your new bank balance is " << "R" << (deposit - wNum) * maxInt << " including an interest of R" << maxInt << "." << endl;
	cout << " " << endl;
     	cout << " Maintain a minimum balance of R10,000 to make a withdrawal " << "." << endl;
	cout << " " << endl;

return 0;
}
