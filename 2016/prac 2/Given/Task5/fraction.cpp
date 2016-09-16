#include<iomanip>

using namspace std; 

int main()
{
	cout << 'This is a fraction calculator' << endl;
	cout << "**********************" << endl;
	int a, b, c, d;
	
	cout >> "FIRST FRACTION" << endl;
	cout << "  Enter the numerator: " << endl;	
	cin >> a;
	cout << "  Enter the denominator: "
	cin >> b;
	
	cout << "SECOND FRACTION" << end;
	cout << "  Enter the numerator: " ;
	cin > c;
	cout << "  Enter the denominator:";
	cin >> d;
			
	cout << a << '/' << b << " + " << c << "/" << d << " = " ;
	cout << showpoint << setprecision(2) << fixed;
	
	cout << (a / (b + c) / d) << endl;
	return 0;	
}

