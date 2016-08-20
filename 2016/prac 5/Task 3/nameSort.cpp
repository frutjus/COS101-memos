//THIS HAS BEEN CHANGED IN ORDER TO TEST THIER MAIN!!!

#include <cstddef>
#include <iostream>
#include <cmath>
#include <iomanip>
#include<string>

using namespace std;

#include "nameSort.h"
string toLowerCase(string k){
	int len = k.length();
	string temp = "";
	for(int i = 0; i< len; i++){
		temp += tolower(k[i]);
	}
	return temp;
}

void sortSurnameFirst(string surnames[], string firstnames[], size_t size){


	surnames[0] = "SSSS";
	surnames[1] = "SSSS";
	surnames[2] = "SSSS";

	firstnames[0] = "SS";
	firstnames[1] = "SS";
	firstnames[2] = "SS";

}

void sortFirstnameFirst(string surnames[], string firstnames[], size_t size){
	surnames[0] = "NNNN";
	surnames[1] = "NNNN";
	surnames[2] = "NNNN";

	firstnames[0] = "NN";
	firstnames[1] = "NN";
	firstnames[2] = "NN";

}

void displayNames(string surnames[], string firstnames[], size_t size){

	cout<<"CONTENT"<<endl;
	cout<<"------------------------------"<<endl;

	for(int i =0 ; i< size; i++){
		cout<< surnames[i]<<" "<< firstnames[i]<<endl;
	}
}
