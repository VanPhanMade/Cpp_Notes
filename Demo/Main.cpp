// https://cplusplus.com/doc/tutorial/preprocessor/
#include <iostream>
#include "Player.h"
#include "VariablesAndDataTypes.h"
#include "Operators.h"
#include "ControlStructures.h"
#include "FunctionConcepts.h"

#define INTEGER int
// declaration
int Substract(int a, int b);

// vs definition
int Substract(int a, int b) {
	return a - b;
}

// Demonstrating data copying/scope
void IncreaseInt(int value)
{
	// value is a copy of the value passed in
	value++;
}

// Incrementing referenced data
void IncreaseIntRef(int* value)
{
	(*value)++;
}

void IncreaseIntRef(int& value)
{
	value++;
}

int s_StaticInt;

INTEGER main()
{
	Log("Hello!");
	// VariablesAndDataTypes* demo1 = new VariablesAndDataTypes();
	// Operators* demo2 = new Operators();
	// ControlStructures* demo3 = new ControlStructures();
	FunctionConcepts* demo4 = new FunctionConcepts();

	// Log header demonstrates how function declaration vs definition works;

	// Pointers (int32 the represents an address for memory)
	int* intPtr = 0;
	intPtr = NULL;
	intPtr = nullptr;

	int myInteger = 12;
	intPtr = &myInteger; // Retrieves the memory address
	float* floatPtr = (float*)&myInteger;

	// Dereferencing pointers
	*intPtr = 22;
	int dataFromPointer;
	dataFromPointer = *intPtr;

	// array allocation
	int* numbers = new int[12];
	memset(numbers, 0, 12);
	delete[] numbers;

	float* floatsArray = new float[2];
	memset(floatsArray, 0, 2);
	float** ptrArray = &floatsArray; // Pointer address of pointers of floats

	// References
	int someInteger = 21;
	int& intReference = someInteger; // reference and someInteger point to the same data
	// ref represents a forward alias of someInteger
	// references must have definitions

	intReference = 11;
	std::cout << "Value of someInt: " << someInteger << std::endl;

	IncreaseInt(intReference);
	IncreaseIntRef(&someInteger);
	IncreaseIntRef(intReference);

	std::cout << "Value of someInt: " << someInteger << std::endl;

	// Example of reference chaining
	int anotherInteger = 17;
	intReference = anotherInteger;

	std::cout << "Value of someInt: " << someInteger << " , Value of intRef: " << intReference << std::endl;

	// Address swapping for pointers
	int* someIntegerPtr = &someInteger;
	*someIntegerPtr = 31;

	someIntegerPtr = &anotherInteger;
	*someIntegerPtr = 82;

	std::cout << "Value of someIntPtr: " << *someIntegerPtr << " , Value of int: " << someInteger << std::endl;

	// Enum
	// PlayerType player1Type = PlayerType::Archer;
	
	// Classes
	Player fightingCharacter(PlayerType::Fighter);

	// std::cout << "Falling apple force: " << CalculateForce( 50000000, 312793) << std::endl;

	std::cin.get();
}