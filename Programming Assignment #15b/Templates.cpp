// Taylor Stargell
// CIS 1202 R02
// December 1, 2023

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Template definition for half function
template <typename T>
// Returns half of the value for floating point types 
T half(T number)
{
	return number / 2.0;
}

template int half <int>(int);
// Returns half of the value for integer types and rounds up or down depending on the value
int half(int number)
{
	return static_cast<int>(round(number/2.0)); 
}

 // Driver to test functions and displays output
int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	return 0;
}

