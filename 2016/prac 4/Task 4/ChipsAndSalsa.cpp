#include <iostream>
#include <iomanip>
#include "ChipsAndSalsa.h"
using namespace std;



int main()
{
	for (int i =0 ;i<NUM_OF_SALSA_TYPES; i++){
		numOfJars[i]= i+56;
		
	}
	
	
	cout<<NUM_OF_SALSA_TYPES;
	
	for (int i =0 ;i<NUM_OF_SALSA_TYPES; i++){
		
		cout<<salsaName[i];
		
	}
	for (int i =0 ;i<NUM_OF_SALSA_TYPES; i++){
		
		cout<<numOfJars[i];
		
	}
	cout<<endl;
}




