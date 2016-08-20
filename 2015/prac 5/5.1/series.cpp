#include "series.h"

const float PI = 3.14159265;


int factorial(int x)	{
	if(x<0) return -1;		//-1 for non existing factorial for negatives
	if (x==0)	return 1;
	return x * factorial(x-1);
}

float toRadians(float y)	{
	return (y*PI)/180;
}

void sinSeries(float x, double v[], size_t t){
	for (size_t i = 0; i < t; i++){
		v[i] = (i % 2 == 0 ? 1 : -1) * (pow(x,(i*2)+1) / factorial((i*2)+1));
	}
}

void cosSeries(float x, double v[], size_t t){
	for (size_t i = 0; i < t; i++){
		v[i] = (i % 2 == 0 ? 1 : -1) * (pow(x, i*2) / factorial(i*2));
	}
}

double sumOfSeries(const double v[], size_t t){
	double addition = 0.0;
	for (size_t i = 0; i < t; i++){
		addition += v[i];
	}
	return addition;
}

void printSeries(const double v[], size_t t){
	for (size_t i = 0; i < t - 1; i++)
	{
		cout << v[i] << " + ";
	}
	cout << v[t-1] ;	
}

void tanSeries(float x, double s[], double c[], size_t t){
	cosSeries(x, c, t);
	sinSeries(x, s, t);
}


