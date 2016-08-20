#include <iostream>
#include "series.h"
using namespace std;

int main()
{
	double ans = 0.0;
	int choice = 0;
	
	double arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
	
	cin >> choice;
	
	switch(choice)
	{
		case 1:{
			cout << sumOfSeries(arr, 3);//6
			
			break;
		}
		
		case 2:{
			cout << sumOfSeries(arr, 1);//1
			
			break;
		}
		
		case 3:{
			cout << sumOfSeries(arr, 0);//0
			
			break;
		}
		
		case 4:{
			cout << sumOfSeries(arr, 6);//21
			
			break;
		}
	}
	
	return 0;
}