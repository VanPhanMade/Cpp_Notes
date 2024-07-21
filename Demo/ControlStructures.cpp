#include "ControlStructures.h"
#include <iostream>
using namespace std;

ControlStructures::ControlStructures()
{
	cout << " ------ Control Structures ------" << endl;
	{ /* Block statement */ }
	{ 5; int someNumber = 6; bool myCondition = false; }

	// ------ Conditional structure ------
	// if ( condition ) statement

	int x = 32;
	if (x == 100) cout << "x is 100" << endl;

	// blocks allow us to use multiple statements
	if (x == 100)
	{
		cout << "x is ";
		cout << x << endl;
	}
	// Other ifs: if (condition) statement1 else statement2
	if (x == 100)
		cout << "x is 100" << endl;
	else
		cout << "x is not 100" << endl;

	// else if statements
	if (x > 0)
		cout << "x is positive" << endl;
	else if (x < 0)
		cout << "x is negative" << endl;
	else
		cout << "x is 0" << endl;
	
	// Conditions for checking data allocation
	int* conditionIntPtr = nullptr;
	if (conditionIntPtr) {
		cout << "Data allocated to our pointer." << endl;
	}
	else {
		cout << "Data missing to our pointer." << endl;
	}

	// ------ Iterative structure ------
	// while (condition) statement
	int n;
	cout << "Enter the starting number: " ;
	cin >> n;

	while (n > 0) {
		cout << n << ", " ;
		--n;
	}
	cout << endl;

	// versus 

	unsigned long m;
	do {
		cout << "Enter number (0 to end): ";
		cin >> m;
		cout << "You entered: " << m << "\n";
	} while (m != 0);

	// for loops
	// for (initialization; condition; incrementation) statement;
	// run init once, while conidition is true run statement, then run incrementation

	for (int n = 10; n > 0; n--) {
		cout << n << ", ";
	}
	cout << "FIRE!\n";

	// Demo of using comma operator // expression , expression = 1 expression
	for (int n = 0, i = 100; n != i; n++, i--)
	{
		// whatever here...
	}

	// ------ Jump statements ------
	for (int n = 10; n > 0; n--)
	{
		cout << n << ", ";
		if (n == 3)
		{
			cout << "countdown aborted!";
			break; // stops current point and exits
		}
	}

	cout << endl;

	for (int n = 10; n > 0; n--) {
		if (n == 5) continue; // goes to the next iteration, skips everything that follows this
		cout << n << ", ";
	}
	cout << "FIRE!\n";

	int g = 10;
	loop:
	cout << g << ", ";
	g--;
	if (g > 0) goto loop;
	cout << "FIRE!\n";

	// ------ Selective structure ------
	int difficulty;
	cout << "Type a difficulty: easy (0), medium (1), hard (2) :" ;
	cin >> difficulty;
	cout << endl;
	switch (difficulty)
	{
	case 0:
		cout << "Easy difficulty choosen!" << endl;
		break;
	case 1:
		cout << "Medium difficulty choosen!" << endl;
		break;
	case 2:
		cout << "Hard difficulty choosen!" << endl;
		break;
	default:
		cout << "So you've picked impossible difficulty choosen!" << endl;
		break;
	}

}
