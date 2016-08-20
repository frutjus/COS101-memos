#include <iostream>
#include <string> 
#include <fstream> 
#include "numberArray.h"

using namespace std ;

/*This function must read the strings in the input file to the given array.  
The size of the array after reading all the elements should be the value in size.*/
void readFile(int arr[], size_t &size, ifstream& inputFile) ;

int main()
{
	int array[MAX] ;
	size_t size = 0 ;

	string file ;
	cout << "Please enter file name: " ;
	cin >> file ;

	ifstream infile(file) ;
	if(infile)
		readFile(array,size,infile) ;
	else
	{
		cout << "Could not open " << file << ". Exiting" << endl ;
		return 0 ;
	}

	int choice = 0;
	int distance = 0 ;
	int start = 0 ;
	int stop = 0 ;
	cout << "Numbers read in are: " ;
	displayArray(array,size) ;
	cout << "\n" ;

	while(choice != 9)
	{

		cout << "1 - Reverse Array" << endl ;
		cout << "2 - Rotate Array" << endl ;
		cout << "3 - Shift Array" << endl ;
		cout << "Please enter a number(1-3) or enter 9 to exit: " ;
		cin >> choice  ;

		switch(choice)
		{
			case 1:
				reverseOrder(array,size) ;
				cout << "After operation number 1: \nArray = " ;
				displayArray(array,size) ;
				break ;
			case 2:
				cout << "Please enter a distance: " ;
				cin >> distance ;
				rotate(array,size,distance) ;
				cout <<"After operation number 2: \nArray = "  ;
				displayArray(array,size) ;
				break ;
			case 3:
				cout << "Please enter a distance: " ;
				cin >> distance ;
				cout << "Please enter a start index: " ;
				cin >> start ;
				cout << "Please enter a stop index: " ;
				cin >> stop ;
				if(shift(array,size,start,stop,distance)) 
				{
					cout <<"After operation number 3: \nArray = " ;
					displayArray(array,size) ;
				}
				else
					cout << "Invalid parametres entered\n\n" ;

				break ;
			case  9:
				cout << "GOODBYE!\n";
				break ;
			default:
				cout << "Invalid option entered. Please try again \n\n" ;

		}
	}
	
	return 0;
}

void readFile(int arr[], size_t& size, ifstream& inputFile)
{
	size_t count = 0 ;
	string temp  ;
	while(!(inputFile.eof()))
	{
		getline(inputFile,temp) ;
		arr[count] = stoi(temp);
		count++ ;
	}
	size = count ;
} 
