#include<iostream>
#include<iomanip>

#include "paintTools.h"

using namespace std;

int main()
{
	cout << "Welcome to the paint job calculator." << endl;
	cout << "*******************************************" << endl;
	
	int rooms;
	cout << "Enter the number of rooms to be painted: ";
	cin >> rooms;
	
	double height;
	cout << "Enter the height of the walls to be painted: ";
	cin >> height;
	
	double totalArea = 0;
	
	for (int i = 1; i <= rooms; i++)
	{
		cout << "-------------------------------------------------------" << endl;
		cout << "Room " << i  << ":" << endl;
		
		double len;
		cout << "Enter the length: ";
		cin >> len;
		
		double wid;
		cout << "Enter the breadth: ";
		cin >> wid;		
		
		int doors;
		cout << "Enter the number of doors: ";
		cin >> doors;

		int windows;
		cout << "Enter the number of windows: ";
		cin >> windows;
		
		double roomArea, gapArea = 0;
		roomArea = 2 * len * height + 2 * wid * height;
		gapArea = doors * 1.12 
			+ windows * 0.98;
		totalArea += (roomArea - gapArea);
	}
	
	cout << setprecision(2) << fixed;
	cout << "***********************************************" << endl;
	cout << "Total area to be painted is " << totalArea << " square meters" << endl;
	
	int tins;
	int areaInt = static_cast<int>(totalArea);
	if (totalArea > areaInt)
	{
		areaInt++;
	}
	int fracPart = areaInt % 110;
	if(fracPart > 0)
	{
		tins =  ((areaInt / 110) + 1);
	}
	else
	{
		tins = (areaInt / 110);
	}
	
	
	cout << "Total number of tins of paint required is " << tins << " tin(s)\n";
	
	double sqm_per_hour = 110/8.0;
	double hours = (totalArea / sqm_per_hour);
	
	cout << "Total hours of labour required: " << hours << " hour(s)\n" ;
	cout << "Total labour charge:  R" << hours * 63.20 << '\n';
	cout << "Total paint job cost: R";
	cout << hours * 63.20 +  tins * 197.50;
	cout << endl;
	return 0;
}