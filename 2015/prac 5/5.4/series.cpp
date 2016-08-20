#include "series.h"

int factorial(int x)	
{
	if(x < 0) return -1;		//-1 for non existing factorial for negatives
	if (x == 0)	return 1;
	return x * factorial(x - 1);
}

double sumOfSeries(const double v[], size_t t)
{
	double total = 0;
	for(size_t i = 0; i < t; i++)
	{
		total += v[i];
	}
	return total;
}

void printSeries(const double v[], size_t t)
{
	using namespace std;
	
	for(size_t i = 0; i < t - 1; i++)
	{
		cout << v[i] << " + ";
	}
	cout << v[t - 1];
}

void printSeries(const double v[][2], size_t t)
{
	using namespace std;
	for(size_t i = 0; i < t - 1; i++)
	{
		cout << setw(11) << v[i][0];
	}
	cout << setw(11) << v[t - 1][0] << endl << "    ";
	for(size_t i = 0; i < t - 1; i++)
	{
		cout << "--------" << " + ";
	}
	cout << "--------" << endl;
	for(size_t i = 0; i < t - 1; i++)
	{
		cout << right << setw(11) <<  v[i][1];
	}
	cout << setw(11)  << v[t - 1][1] << endl;
}
	
void eSeries(double x, double v[], size_t t)
{
	for(size_t i = 0; i < t ; i++)
	{
		v[i] = pow(x, i) / factorial(i);
	}
	
}

void eSeries(double x, double v[][2], size_t t)
{
	for(int i = 0; i < t ; i++)
	{
		v[i][0] = pow(x,i);
		v[i][1] = factorial(i);
	}
	
}

void lnSeries(double x, double v[], size_t t)
{
	for(size_t i = 0; i < t ; i++)
	{
		v[i] = (i % 2 == 0 ? 1 : -1) * (pow(x, i + 1) / (i + 1));
	}
	
}

void lnSeries(double x, double v[][2], size_t t)
{
	for(size_t i = 0; i < t ; i++)
	{
		v[i][0] = (i % 2 == 0 ? 1 : -1) * (pow(x, i + 1));
		v[i][1] = (i + 1);
	}
}
