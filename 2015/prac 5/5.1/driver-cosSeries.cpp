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
	
	float radians[4] = {2.617993877, -2.007128639, 0.349065850, 0}; //Angles = {150, -115, 20, 0}
	for(int i = 0; i < 4; i++)
	{
		fill99(array);
		cosSeries(radians[i], array, DIMENSION-1);
		showValues(array);
		cout << "---" << endl;
		//sumOfSeries(array, DIMENSION) << endl;
	}
	for(int i = 1; i >= 0; i--)
	{
		fill99(array);
		cosSeries(radians[3], array, i);
		showValues(array);
		cout << "---" << endl;
		//<< sumOfSeries(array, DIMENSION) << endl;
	}
	return 0;
}
