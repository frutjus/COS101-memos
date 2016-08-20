#include <iostream>
#include <iomanip>
#include <cstddef>
#include "inputVector.cpp"

#include "vectors.h"

int main()
{
	using namespace std;
	size_t len;
	cin >> len;
	int v[len];
	inputVector(v, len);
	std::cout << "Magnitude: " << fixed << setprecision(3) << magnitude(v, len);
	std::cout << "\n";
	return 0;
}

