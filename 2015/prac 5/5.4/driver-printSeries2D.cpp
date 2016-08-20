#include "series.h"

/* 
The test cases are run separately because if their veritcal alignment
is wrong students will loose marks simply because we do not see the 
subsequent output in the right places.  It is also good to do it this way 
when testing extremes  - it avoids that students loose all their marks  
if their program segfault on an extreme.
 */
using namespace std;

int main()	
{ 
	/** need only one test matrix because we need not look at how it 
	    deals with cases where the values themselves are extreme 
	    because it is not relvant. The printer just echo so it would
	    deal consistantly with values. One case that has negative, 
	    positve and zero value respectivey are thus sufficient.*/
	
	double array[5][2] = {{5,1},{-1,1},{1,3},{3,6},{9,9}};
	size_t aSize;
	
	cin >> aSize;
	cout << "AAAAAA";
	printSeries(array, aSize);
	cout << "HHHHHH\nXX\nXX\nXX\n";
	return 0;
}
