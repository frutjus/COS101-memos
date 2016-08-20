#ifndef SERIES_H
#define SERIES_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int factorial(int i);
float toRadians(float y);
void sinSeries(float x, double v[], size_t t);
void cosSeries(float x, double v[], size_t t);
void tanSeries(float x, double s[], double c[], size_t t);
double sumOfSeries(const double v[], size_t t );
void printSeries(const double v[],size_t t );



#endif
