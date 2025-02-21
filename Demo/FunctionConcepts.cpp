#include "FunctionConcepts.h"
#include <iostream>
using namespace std;

// Declaration
void Log(const char* message)
{
	std::cout << message << std::endl;
}

// ------ Local declaration ------

void Add(int a, int b) {
	cout << "Ints: " << a << " + " << b << " = " << a + b << endl;
}
// ------ Function overloading ------

void Add(float a, float b) {
	cout << "Floats: " << a << " + " << b << " = " << a + b << endl;
}
void Add(double a, double b) {
	cout << "Doubles: " << a << " + " << b << " = " << a + b << endl;
}
void Add(int a, int b, int c) {
	cout << "Sum of 3 ints: " << a + b + c << endl;
}

// ------ Inline Functions ------ 
// https://www.geeksforgeeks.org/inline-functions-cpp/

inline int CubicOf(int a) { return a * a * a; }

// ------ Recursion ------
int Fibonacci(int n)
{
	// n is the index in our number sequence
	// Fn = Fn-1 + Fn-2
	// Where the initial sequence is 0, 1, 1, 2, 3, 5, 8, 13, 21
	if (n <= 1)
		return n;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}


FunctionConcepts::FunctionConcepts()
{
	Add(1, 1);
	// vs
	Add(1.4f, 2.6f);
	// vs
	Add(1.467, 12.6);
	// vs
	Add(1, 1, 1);

	int n = 0;
	cout << "Enter a number for Fibonacci sequence: ";
	cin >> n;
	cout << endl;
	cout << "Fibonacci of " << n << " is: " << Fibonacci(n) << endl;
}
