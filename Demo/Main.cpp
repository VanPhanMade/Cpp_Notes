// https://cplusplus.com/doc/tutorial/preprocessor/
#include <iostream>
#include "Log.h"
#include "Player.h"
#include "Calculations.h"
#include "VariablesAndDataTypes.h"

#define INTEGER int


float CalculateForce(float mass, float acceleration)
{
	float force = mass * acceleration;
	force += 32123123.0f; // air resistance
	force + 321.0f; // drag
	return force;
}

int Multiply(int a, int b) {
	return a * b;
}

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
	// https://www.geeksforgeeks.org/cpp-data-types/
	int age; // 0
	age = 23;
	int yourAge;
	VariablesAndDataTypes* demo1 = new VariablesAndDataTypes();

	std::cout << "Sum " << Add(10, 10, 10) << std::endl;

	std::cout << age << std::endl;

	// https://press.rebus.community/programmingfundamentals/chapter/increment-and-decrement-operators/
	age++; // Postfix Incrementation
	++age; // Prefix Incrementation

	std::cout << "My age: " << age << std::endl; // 25

	std::cout << "My brother's age: " << ++age << std::endl;
	std::cout << "My brother's real age after re-reading: " << age << std::endl;

	// https://www.geeksforgeeks.org/cpp-literals/
	std::cout << "Our age multiplied: " << Multiply(23, age) << std::endl;

	// Function declarations/promises
	Log("Hello World!");

	std::cout << "8 minus 1: " << Substract(8, 1) << std::endl;

	// Conditions
	int x = 7;
	bool comparisonResult = x == 5;
	if (comparisonResult)
	{
		Log("Our number is equal to 5.");
	}

	int* conditionIntPtr = nullptr;
	// Compares pointer to pointer to zero data
	if (conditionIntPtr) {
		Log("Data allocated to our pointer. ");
	}
	else {
		Log("Data missing to our pointer. ");
	}

	// Loops
		// Initialization, Conditional to exit, Incrementation/Iterator
	for (int i = 0; i < 5; i++)
	{
		Log("Repeating message. ");
		// Continue (goes to next iteration from here)

		// Break

		// Return
	}

	// while ( a < 7 )

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
	PlayerType player1Type = PlayerType::Archer;
	
	// Classes
	Player fightingCharacter(PlayerType::Fighter);

	// std::cout << "Falling apple force: " << CalculateForce( 50000000, 312793) << std::endl;

	std::cin.get();
}