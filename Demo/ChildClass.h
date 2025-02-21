#pragma once
class ChildClass
{
	public: 
		ChildClass();
		int GetChildClassData();
		virtual void PrintMessage();
	 
	protected: 
		int childClassData = 0;
	 
	private:
		int exclusiveChildData = 12312;
};

class ParentClass : ChildClass
{
	public: 
		virtual void PrintMessage() override;
	protected: 
	 
	private:
};


