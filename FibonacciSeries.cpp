// FibonacciSeries.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int main()
{
	int f1 = 0, f2 = 1, f3;
	int i= 0;
	cout << f1 << ",\t";
	cout << f2 << ",\t";
	while (i < 10) {
		f3 = f1 + f2;
		cout << f3 << ",\t";
		f1 = f2;
		f2 = f3;
		i++;
	}

}

