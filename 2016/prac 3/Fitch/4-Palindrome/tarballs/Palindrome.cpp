#include <iostream>
#include<string>
using namespace std;

int main()
{
  	int Pnum;
	
     	cout << "Enter a nonzero positive number: ";
    	cin >> Pnum;
	
	if(Pnum <= 0)
	{
		cout << "You have entered " << Pnum << ", where you should have entered a nonzero positive interger number" << endl;
		return 0;	
	}
	
	int num, dig = 0, rev=0;
	num = Pnum;
	
	while(Pnum != 0){
		dig = Pnum%10;
		rev = rev*10 + dig;
		Pnum = Pnum/10;
	}
		
			
	cout << "The reverse of " << num << " is: " << rev << endl;
     	if (num == rev)
		cout << "Yes! This number is a palindrome" << "." << endl;
    	else
		cout << "NO -- This number is not a palindrome" << "." << endl;

    return 0;
}



