// EvenOrOddSimple.cpp : Defines the entry point for the console application.
// challenge for myself: this is a rewrite of EvenOrOdd.cpp favoring concision/brevity primarily
// v20180722.1

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isEven(int x)
{
	return (x % 2 == 0);
}

int main()
{
	cout << "Please type an integer:\n";
	int userInt;
	cin >> userInt;
	
	if (isEven(userInt))
	{
		cout << userInt << " is an even number.\n";
	}
	else 
	{
		cout << userInt << " is an odd number.\n";
	}

    return 0;
}

