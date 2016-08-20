#ifndef VECTORS_H
#define VECTORS_H
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstddef>

/************************************************
	Header file for funcion definitions
************************************************/
using namespace std;

//Function for printing contents of vector	
void printVector(int [], size_t);

//Add vectors 
int* addVectors(const int v1[], const int v2[], size_t dims);

//Subtract vectors 
int* subtractVectors(const int v1[], const int v2[], size_t dims);

//Calculates magnitude of vector
double magnitude(const int v[], size_t dims);

//check if vectors are equal
bool equalVectors(const int v1[], const int v2[], size_t dims);

//Perform dot product notation on vectos
int dotProduct(const int v1[], const int v2[], size_t dims);

#endif