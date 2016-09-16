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
		roomArea = getRoomArea(len, wid, height);
		gapArea = getTotalArea(doors, 1.12) 
			+ getTotalArea(windows, 0.89);
		totalArea += getActualArea(roomArea, gapArea);
	}
	
	cout << setprecision(2) << fixed;
	cout << "***********************************************" << endl;
	cout << "Total area to be painted is " << totalArea << " square meters" << endl;
	cout << "Total number of tins of paint required is " << getTins(totalArea) << " tin(s)\n";
	cout << "Total hours of labour required: " << getHours(totalArea) << " hour(s)\n" ;
	cout << "Total labour charge:  R" << getHours(totalArea) * 63.20 << '\n';
	cout << "Total paint job cost: R";
	cout << getHours(totalArea) * 63.20 +  getTins(totalArea) * 197.50;
	cout << endl;
	return 0;
}