#pragma once
class OOPConcepts
{
	public: 
		OOPConcepts();						// Default constructor
		OOPConcepts(int a);					// Parameterized constructor
		OOPConcepts(OOPConcepts& original);	// Copy constructor
		~OOPConcepts();						// Deconstructor
		int GetMyValue();
	protected: 
	 
	private:
		int myValue = 0;
};

