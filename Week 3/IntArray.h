#pragma once
#include <iostream>
using namespace std;

class IntArray
{
private:
	int* aPtr;
	int arraySize;
public:
	IntArray(int);	// Convert constructor
	IntArray(const IntArray&);	// Copy constructor
	~IntArray();
	int size() const
	{
		return arraySize;
	}

	// Overload the [ ] operator
	int& operator[](int) const;
};