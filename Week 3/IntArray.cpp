#include "IntArray.h"
#include <cstdlib>

IntArray::IntArray(int arraySize)
{
	this->arraySize = 0;
	if (arraySize < 0)
	{
		cout << "ERROR: Array size invalid" << endl;
		exit(0);
	}
	else
	{
		this->arraySize = arraySize;
	}

	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = 0;
	}
}

IntArray::IntArray(const IntArray& obj)
{
	arraySize = obj.arraySize;
	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = *(obj.aPtr + i);
	}
}

IntArray::~IntArray()
{
	if (arraySize > 0)
	{
		delete[] aPtr;
	}
}

int& IntArray::operator[](int sub) const
{
	// Check invalid subscript entry
	if (sub < 0 || sub >= arraySize)
	{
		cout << "ERROR: Subscript out of range." << endl;
		exit(0);
	}

	return aPtr[sub];	// Correct subscript. 
}