#include "series.h"

const size_t DIMENSION = 5;

void showValues(const double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		cout << v[i] << '\t';
	}
}

void showValues(const double v[][2])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		cout << v[i][0] << "H" << v[i][1] << '\t';
	}
}

void fill99(double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		v[i] = 999;
	}
}

void fill99(double v[][2])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		v[i][0] = 999;
		v[i][1] = 999;
	}
}

void runCase1(double x, size_t n)
{
	double array[DIMENSION];
	cout <<  "x = " << x << "\tn = " << n << " ---\t"; 
	fill99(array);
	lnSeries(x, array, n);
	showValues(array);
	cout << "---" << endl;
}

void runCase2(double x, size_t n)
{
	double array[DIMENSION][2];
	cout <<  "x = " << x << "\tn = " << n << " ---\t"; 
	fill99(array);
	lnSeries(x, array, n);
	showValues(array);
	cout << "---" << endl;
}

int main()	
{ 
	int caseNr;
	cin >> caseNr;

	if(caseNr > 2)
	{
		caseNr == 3 ? runCase1(0, 1) : runCase2(0, 1);
		caseNr == 3 ? runCase1(0, 0) : runCase2(0, 0);
	}
	else
	{
		double x[4] = {0.3, 1, -0.2, 0};
		for(int i = 0; i < 4; i++)
		{
			if(caseNr == 1)
				runCase1(x[i], DIMENSION -1);
			else
				runCase2(x[i], DIMENSION -1);
		}
	}
	return 0;
}
