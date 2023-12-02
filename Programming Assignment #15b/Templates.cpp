// Taylor Stargell
// CIS 1202 R02
// December 1, 2023

#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for half function
template <typename T>
T half(T number)
{
	return number * 0.5;
}

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

