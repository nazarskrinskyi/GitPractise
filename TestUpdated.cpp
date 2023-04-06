//============================================================================
// Name        : TestProg.cpp
// Author      : Nazar
// Version     :qwewqerqwr
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//C:\Users\Asus\eclipse-workspace\TestProg\src
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, c;
	float f_;
	cout << "value for x and c = ";
	cin >> x >> c;
	if (x > 0.5)
	{
		f_ = tan(sqrt(x) + x);
		cout << "\nf = " << f_ << " x > 0.5";
	}
	else if(0.1 <= x and x <= 0.5)
	{
		f_ = sin(abs(x - c));
		cout << "\nf = " << f_ << " 0.1 <= x and x <= 0.5";
	}
	else
	{
		f_ = sqrt(abs(x + pow(cos(x-1), 2)));
		cout << "\nf = " << f_ << " x < 0.1";
	}
}
