// Small.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>

#include "Functions.h"

using namespace std; 

int main()
{
	auto a = add(3, 4); 
	cout << "3 + 4 is " << a << endl; 
	double b = add(1.2, 3.4); 

	cout << endl; 
	auto c = add(1.1, 2.2, 3.3); 
	cout << "1.1 + 2.2 + 3.3 is " << c; 

	add(0, 0); 
	add(0, 0, 0);

	if (test(true))
	{
		cout << "true passes the test" << endl; 
	}
	if (test(3.2))
	{
		cout << "3.2 passes the test " << endl; 
	}

	std::this_thread::sleep_for(5s); 

    return 0;
}

