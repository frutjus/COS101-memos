#include<iostream>
#include "paintTools.h"

using namespace std;

int main()
{
	cout << getItemArea(3, 7) << endl;
	cout << getTotalArea(3, 7) << endl;
	cout << getActualArea(7, 3) << endl;
	cout << getRoomArea(3, 5, 4) << endl;
	cout << getTins(140) << '\t';
	cout << getTins(145) << '\t';
	cout << getTins(10) << '\t';
	cout << getTins(140.1) << endl;
	cout << getHours(70) << '\t';
	cout << getHours(88.4) << endl;
	return 0;
}