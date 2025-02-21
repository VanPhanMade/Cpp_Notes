#include "ChildClass.h"
#include <cstdlib> 
#include <iostream> 

using namespace std;

ChildClass::ChildClass()
{
	childClassData = rand();
}

int ChildClass::GetChildClassData()
{
	return childClassData;
}

void ChildClass::PrintMessage()
{
	cout << "Child class version! " << endl;
}

void ParentClass::PrintMessage()
{
	
	cout << "Parent class version! " << endl;
}
