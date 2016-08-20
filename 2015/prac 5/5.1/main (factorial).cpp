#include <iostream>
#include "series.h"
using namespace std;

/* Instead of using input files this function can be tested with this driver
in which the test cases are hard-coded. It produces two output lines which can
both be evaluated using a single case in the memo.  */

int main()
{	
	cout << factorial(5) << endl;
	/* This line can produce the following output 
	   Each of these should be an alternative for this line in the memo 
	120 - Correct
	60 - shifted  (because 5! can be calcualted 1 * 2 * 3 * 4 * 5 or as 5 * 4 * 3 * 2 * 1 we cannot know if  the shift is left or right
	24 - Off by one
	720 - Off by one
	12 - Off by one and shifted
	360 - Off by one and shifted
	*/
	
	cout << factorial(0) << endl;
	/* This line can produce the following output.
	    Because all the possibilities for doing it wrong is already evaluated in the 
	    first line we need only test this case for correctness and no alternatives are needed.
	1  - Correct
	*/	
	
	return 0;
}