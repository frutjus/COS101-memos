#include <iostream>
#include <fstream>
#include <cmath>
#include "arrayDiffs.h"
using namespace std;

void printArray(int [], int);

int main()	{
	int size, diff, pairs;
	ifstream in;
	in.open("testData");
	in>>diff;
	in>>size;
	int _array[size];	
	for(unsigned i=0; i<size; i++)	
		in>>_array[i];
	pairs=countPairsDifference( _array, size, diff);
	cout<<pairs<<endl;
	
	in>>diff;
	in>>size;
	int _arr[size];	
	for(unsigned i=0; i<size; i++)	
		in>>_arr[i];
	pairs=countPairsDifference( _arr,size,diff);
	cout<<pairs<<endl;

	in>>diff;
	pairs=countPairsDifference( _arr,size,diff);
	cout<<pairs<<endl;
	
	sort(_array, 7);
	printArray(_array,7);
	sort(_arr,size);
	printArray(_arr,size);
	
	in>>diff;
	in>>size;
	int _arry[size];	
	for(unsigned i=0; i<size; i++)	
		in>>_arry[i];
	pairs=countPairsDifference( _arry,size,diff);
	cout<<pairs<<endl;

	return 0;
}

void printArray(int arr[], int size)	{
	for(int x=0; x<size; x++)	cout<<arr[x]<<" ";
	cout<<endl;
}


