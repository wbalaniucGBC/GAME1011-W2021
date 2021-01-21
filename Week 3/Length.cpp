#include "Length.h"

Length operator+(Length a, Length b)
{
	return Length(a.len_inches + b.len_inches);
}

Length operator-(Length a, Length b)
{
	return Length(a.len_inches - b.len_inches);
}

bool operator<(Length a, Length b)
{
	return a.len_inches < b.len_inches;
}

bool operator>(Length a, Length b)
{
	return a.len_inches > b.len_inches;
}

bool operator==(Length a, Length b)
{
	return a.len_inches == b.len_inches;
}

Length Length::operator++()	// Prefix
{
	len_inches++;
	return *this;
}

Length Length::operator++(int)	// Postfix
{
	Length temp = *this;
	len_inches++;
	return temp;
}

ostream& operator<<(ostream& out, Length a)
{
	out << a.getFeet() << " feet, " << a.getInches() << " inches";
	return out;
}

istream& operator>>(istream& in, Length& a)
{
	int feet, inches;
	cout << "Enter feet: ";
	in >> feet;
	cout << "Enter inches: ";
	in >> inches;

	a.setLength(feet, inches);
	return in;
}