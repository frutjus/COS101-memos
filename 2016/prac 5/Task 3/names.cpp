#include <cstddef>
#include <iostream>
#include <iomanip>

#include <cmath>
#include <string.h>
#include "nameSort.h"
using namespace std;



int main(){

	string Fnames[200];
	string Lnames[200];

	size_t size =0;

	string fileName;

	ifstream myfile;

	char choice;

cin>>fileName;
myfile.open (fileName.c_str());
  

if (!myfile){
	cout << "File named "<< fileName << " could not be found." <<endl;
	fileName.clear( );
	return 0;
}

string temp ;

int i =0;
while(myfile >> temp){
	Lnames [i] = temp;
	myfile>>temp;
	Fnames [i] = temp;
	i++;
}
size = i;


cout<<setw(15)<<right<<"Name Sorting" <<endl;
cout<<"------------------------------" <<endl;
cout<<"1. Sort names by surname then first names" <<endl;
cout<<"2. Sort names by first names then surnames" <<endl;


cout<<"Enter your sorting choice: ";
cin>>choice;

switch(choice){
	case '1': 
			cout<<"The sorted names by surname then first names are: " <<endl;
			sortSurnameFirst(Lnames, Fnames,size);
		break;

	case '2': 
			cout<<"The sorted names by first names then surnames are: " <<endl;
			sortFirstnameFirst(Lnames, Fnames,size);
		break;
	case '3': 
		cout<<endl;
			displayNames(Lnames, Fnames,size);
		return 0;
}

cout<<"CONTENT"<<endl;
	cout<<"------------------------------"<<endl;

	for(int i =0 ; i< size; i++){
		cout<< Lnames[i]<<" "<< Fnames[i]<<endl;
	}

}




