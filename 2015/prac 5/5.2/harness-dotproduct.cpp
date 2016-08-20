#include <iostream>
#include <cstddef>
#include "inputVector.cpp"

#include "vectors.h"

int main()
{
	using namespace std;
	size_t len;
	cin >> len;
	int v1[len], v2[len];
	inputVector(v1, len);
	inputVector(v2, len);
	std::cout << "dotProduct: " << dotProduct(v1, v2, len);
	std::cout << "\n";
	return 0;
}

