#include "OOPConcepts.h"
#include <iostream>

using namespace std;

OOPConcepts::OOPConcepts()
{
	cout << "Normal constructor value: "<< myValue << endl;
}

OOPConcepts::OOPConcepts(int a)
{
	myValue = a;
	cout << "Parameterized constructor value: " << myValue << endl;
}

OOPConcepts::OOPConcepts(OOPConcepts& original)
{
	myValue = original.GetMyValue();
	cout << "Copy constructor value: " << myValue << endl;
}

OOPConcepts::~OOPConcepts()
{
	cout << "Deconstructor called! " << endl;
}

int OOPConcepts::GetMyValue()
{
	return myValue;
}
