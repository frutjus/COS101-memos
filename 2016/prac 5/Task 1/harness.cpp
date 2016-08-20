#include <iostream>
#include <cmath>
#include <iomanip>
#include "vectorFunctions.h"

using namespace std;

void showVector(int v[], size_t dims){
	cout << "[";
	for(int i = 0; i < dims; i++)
	{
		cout << v[i] << "";
		if (i < dims - 1){
			cout << ",";
		}
		
	}
	cout << "]";
}

int main()
{
	
	int v0[] = {};
	int v1[1] ={1};
	int v2[1] = {2};
	int v3[3] ={3, 5, 9};
	int v33[3] ={3, 5, 9};
	int v4[3] = {-2, -4, -7};
	int v5[10] = {14, 34, 78, 82, 1001, 2, 4, 10, -4, -800};
	int v55[10] = {14, 34, 78, 82, 1001, 2, 4, 10, -4, -800};
	int v6[10] = {4, 4, 8, 2, 100, 25, 42, 110, -40, -80};
	int magnitudeSum = 0;
	bool isEqual;
	int dotPro = 0;
	
	//Testing their addVector()
	showVector(addVectors(v1,v2,1), 1);
	cout << endl;
	showVector(addVectors(v3,v4,3), 3);
	cout << endl;
	showVector(addVectors(v5,v6,10), 10);
	cout << endl;

	//Testing their subtractVector()
	showVector(subtractVectors(v1,v2,1), 1);
	cout << endl;
	showVector(subtractVectors(v3,v4,3), 3);
	cout << endl;
	showVector(subtractVectors(v5,v6,10), 10);
	cout << endl;	

	//Testing magnitude
	magnitudeSum = magnitude(v3, 3);
	cout << magnitudeSum << endl;
	magnitudeSum = magnitude(v5, 10);
	cout << magnitudeSum << endl;

	//Testing isEqual()
	isEqual = equalVectors(v1, v2, 1);
	if (isEqual){
		cout << "EQUAL";
	}
	else {
		cout << "NOT EQUAL";
	}
	cout << endl;

	isEqual = equalVectors(v5, v6, 10);
	if (isEqual){
		cout << "EQUAL";
	}
	else {
		cout << "NOT EQUAL";
	}
	cout << endl;

	isEqual = equalVectors(v5, v55, 10);
	if (isEqual){
		cout << "EQUAL";
	}
	else {
		cout << "NOT EQUAL";
	}
	cout << endl;

	//Testing dot product
	dotPro = dotProduct(v1, v2, 1);
	cout << dotPro << endl;

	dotPro = dotProduct(v3, v4, 3);
	cout << dotPro << endl;

	dotPro = dotProduct(v5, v6, 10);
	cout << dotPro << endl;
	
	//Testing their printer function
	printVector(v1, 1);
	cout << endl;
	printVector(v3, 3);
	cout << endl;
	printVector(v0, 0);
	cout << endl;

	return 0;
}
