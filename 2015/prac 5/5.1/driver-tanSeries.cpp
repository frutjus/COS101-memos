#include "series.h"

const size_t DIMENSION = 3;

void showValues(const double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		cout << v[i] << '\t';
	}
}

void fill99(double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		v[i] = 999;
	}
}


int main()	
{ 
	double arrayS[DIMENSION];
	double arrayC[DIMENSION];
	
	//float angles[4] = {180, -68, 33, 500 };
	float radians[4] = {3.141592654, -1.186823891, 0.575958653, 8.72664626};
	/*for(int i = 0; i < 4; i++)
	{
		radians[i] = toRadians(angles[i]);
	}*/
	for(int i = 0; i < 4; i++)
	{
		fill99(arrayS);
		fill99(arrayC);
		tanSeries(radians[i], arrayS, arrayC, DIMENSION);
		showValues(arrayS);
		showValues(arrayC);
		cout << "---" << endl;
		//cout << "---" << sumOfSeries(array, DIMENSION-1) << endl;
	}
	for(int i = 1; i >= 0; i--)
	{
		fill99(arrayS);
		fill99(arrayC);
		tanSeries(radians[3], arrayS, arrayC, i);
		showValues(arrayS);
		showValues(arrayC);
		cout << "---" << endl;
		//cout << "---" << sumOfSeries(array, DIMENSION-1) << endl;
	}
	return 0;
}
