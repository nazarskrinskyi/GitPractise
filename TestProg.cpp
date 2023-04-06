//============================================================================
// Name        : TestProg.cpp
// Author      : Nazar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, c;
	float f;
	cout << "value for x and c = ";
	cin >> x >> c;
	if (x > 0.5)
	{
		f = tan(sqrt(x) + x);
		cout << "\nf = " << f << " x > 0.5";
	}
	else if(0.1 <= x and x <= 0.5)
	{
		f = sin(abs(x - c));
		cout << "\nf = " << f << " 0.1 <= x and x <= 0.5";
	}
	else
	{
		f = sqrt(abs(x + pow(cos(x-1), 2)));
		cout << "\nf = " << f << " x < 0.1";
	}
}
