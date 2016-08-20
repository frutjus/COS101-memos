#include <iostream>
#include "series.h"
using namespace std;

int main()
{
	//might have to make it output fixed to avoid scientific notation
	cout <<"XX" << fixed << setprecision(7) << toRadians(155) <<"XX" << endl;
	cout <<"XX" << fixed << setprecision(7) << toRadians(360) <<"XX" << endl;
	cout <<"XX" << fixed << setprecision(7) << toRadians(10) <<"XX" << endl;
	cout <<"XX" << fixed << setprecision(7) << toRadians(281) <<"XX" << endl;
	
	return 0;
}