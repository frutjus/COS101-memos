#include <iostream>
#include <cstdlib>
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

#include "vectors.h"

int main()
{
	using namespace std;
	size_t len;
	cin >> len;
	int v[len];
	inputVector(v, len);
	printVector(v, len);
	std::cout << "\n";
	return 0;
}

