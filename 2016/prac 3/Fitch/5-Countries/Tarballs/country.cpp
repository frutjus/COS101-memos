#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
	string fileName;
	cout << "Enter the file name: ";
	cin >> fileName;
	cout << "-------------------------------------------------------" << endl;	
	ifstream inFile;
	inFile.open(fileName);
	if(!(inFile))
	{
		cout << "File " << fileName << " could not be opened" << endl;
		return 0;
	}	
	
	int i = 0;
	int size, tiny = INT_MAX;
	string country, tinyCountry;
	cout << setprecision(0) << fixed;
	while(inFile >> country)
	{
		i++;
		cout << setw(3) << right << i << "  ";
		cout << setw(30) << left << country;
		inFile >> size;
		if(size < tiny)
		{
			tiny = size;
			tinyCountry = country;
		}
		cout << setw(10) << right << size << endl;
	}
	cout << "-------------------------------------------------------" << endl;
	if (i == 0)
	{
		cout << "The are no countries on the list" << endl;
	}
	else
	{
		cout << "The smallest country is " << tinyCountry << endl;
	}
	return 0;
}
