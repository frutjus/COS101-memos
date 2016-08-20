#include "series.h"

const size_t DIMENSION = 6;

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
	double array[DIMENSION];
	
	float radians[5]= {2.9670597, -1.57079632, 0.261799387, 0, 6.2831853}; //Angles = {170, -90, 15, 0, 360}
	for(int i = 0; i < 5; i++)
	{
		fill99(array);
		sinSeries(radians[i], array, DIMENSION-1);
		showValues(array);
		cout << "---" << endl;
		//cout << "---" << sumOfSeries(array, DIMENSION-1) << endl;
	}
	for(int i = 1; i >= 0; i--)
	{
		fill99(array);
		sinSeries(radians[4], array, i);
		showValues(array);
		cout << "---" << endl;
		//cout << "---" << sumOfSeries(array, DIMENSION-1) << endl;
	}
	return 0;
}
