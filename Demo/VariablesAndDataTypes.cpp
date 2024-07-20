#include "VariablesAndDataTypes.h"
#include <iostream>

VariablesAndDataTypes::VariablesAndDataTypes()
{
	// https://www.geeksforgeeks.org/cpp-data-types/
	// ** Primary primative types
	int firstInt = 0;
	std::cout << "Int: " << firstInt << " Size: " << sizeof(firstInt) << " bytes." << std::endl;
	char firstChar = 'k'; // char firstChar = 23;
	std::cout << "Char: " << firstChar << " Size: " << sizeof(firstChar) << " bytes." << std::endl;
	bool firstBool = true;
	std::cout << "Bool: " << firstBool << " Size: " << sizeof(firstBool) << " bytes." << std::endl;
	float firstFloat = 5.123f;
	std::cout << "float: " << firstFloat << " Size: " << sizeof(firstFloat) << " bytes." << std::endl;
}
