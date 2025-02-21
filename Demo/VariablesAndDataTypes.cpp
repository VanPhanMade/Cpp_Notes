#include "VariablesAndDataTypes.h"
#include <iostream>
using namespace std;

VariablesAndDataTypes::VariablesAndDataTypes()
{
	cout << " ------ Variables And Data Types Structures ------" << endl;
	// https://www.geeksforgeeks.org/cpp-data-types/
	// ** Primary primative types
	int firstInt = 0;
	cout << "Int: " << firstInt << " Size: " << sizeof(firstInt) << " bytes." << std::endl;
	char firstChar = 'k'; // char firstChar = 23;
	cout << "Char: " << firstChar << " Size: " << sizeof(firstChar) << " bytes." << std::endl;
	bool firstBool = true;
	cout << "Bool: " << firstBool << " Size: " << sizeof(firstBool) << " bytes." << std::endl;
	float firstFloat = 5.123f;
	cout << "float: " << firstFloat << " Size: " << sizeof(firstFloat) << " bytes." << std::endl;
	double firstDouble = 5.123;
	cout << "double: " << firstDouble << " Size: " << sizeof(firstDouble) << " bytes." << std::endl;
	// void is also a primative type
	// 

	// Modifiers
	short int firstShortInt = 40000;
	cout << "Short Int: " << firstShortInt << " Size: " << sizeof(firstShortInt) << " bytes." << std::endl;
	unsigned short int firstUnsignedShortInt = 40000;
	cout << "Unsigned Short Int: " << firstUnsignedShortInt << " Size: " << sizeof(firstUnsignedShortInt) << " bytes." << std::endl;

	// long int goes up to -2,147,483,648 to 2,147,483,647
	// long long int
	// unsigned long long int
	// wchar_t

	// Expression types: Literals, Variables, Operators, Function Calls
	// Code that yields a result is an 'expression'
	// Literals: https://www.geeksforgeeks.org/cpp-literals/

	5;
	5 + 5;							// Arithmetic Expression
	firstInt > 0;					// Relational Expression
	!(firstFloat < 0);				// Logical Expression
	int x;
	x = 10;							// Assignment Expression
	x = (10 + 10) + 7 * (8 + 2);	// Compound Expression

}
