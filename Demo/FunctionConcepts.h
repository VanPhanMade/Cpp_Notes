#pragma once
// Forward Declaration
void Log(const char* message);

class FunctionConcepts
{
	public: 
		FunctionConcepts();
		int squareOf(int a);
	protected: 
	 
	private:
};

inline int FunctionConcepts::squareOf(int a){ return a * a; }

