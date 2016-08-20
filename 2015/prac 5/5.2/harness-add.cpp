#include <iostream>
#include <cstddef>

#include "inputVector.cpp"

#include "vectors.h"

int main()
{
	using namespace std;
	size_t len;
	cin >> len;
	int v1[len], v2[len], r[len];
	inputVector(v1, len);
	inputVector(v2, len);
	addVectors(v1, v2, r, len);
	printVector(r, len);
	std::cout << "\n";
	return 0;
}

