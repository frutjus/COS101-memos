/* code fragment reused in all test harnesses */
#include <cstdlib> //for exit()

void inputVector(int v[], size_t len)
{
	using namespace std;
	for (size_t i=0; i<len; i++) {
		cin >> v[i];
		if (!cin.good()) {
			cout << "Error: that is not a valid value for a vector element" << endl;
			exit(2);
		}
	}
}


