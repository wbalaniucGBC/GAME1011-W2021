#pragma once
#include <iostream>
using namespace std;

class Length
{
private:
	int len_inches;
public:
	Length()
	{
		len_inches = 0;
	}
	Length(int inches)		// Convert constructor
	{
		len_inches = inches;
	}
	Length(int feet, int inches)
	{
		setLength(feet, inches);
	}
	int getFeet() const
	{
		return len_inches / 12;
	}
	int getInches() const
	{
		return len_inches % 12;
	}
	void setLength(int feet, int inches)
	{
		len_inches = (12 * feet) + inches;
	}

	// Operator overloading	-- Prototypes
	friend Length operator+(Length a, Length b);
	friend Length operator-(Length a, Length b);
	friend bool operator<(Length a, Length b);
	friend bool operator>(Length a, Length b);
	friend bool operator==(Length a, Length b);

	// Overload our prefix and postfix operator++
	Length operator++();	// ++b; (Prefix)
	Length operator++(int);	// b++; (Postfix)

	// Overload output and input
	friend ostream& operator<<(ostream& out, Length a);
	friend istream& operator>>(istream& in, Length& a);
};