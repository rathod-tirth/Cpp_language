// Aggeregation
// Personal preference: It is useless and increase the code if want to use class inside another class refer alt_agg.cpp

#include <iostream>
using namespace std;

class A
{
	public:
		int num1, num2;
		
		A()
		{
			num1=10;
		}
};

class B
{
	public:
		A *obj;					// pointer object is created
		
		B(A *ob1)		// pointer object as parameter
		{
			obj=ob1;			// pointer object in B class = pointer object in parameter
			
			cout<<obj->num1;
		}
};

int main()
{
	A ob0;
	
	B ob1(&ob0);				// passing object as reference
	
	return 0;
}
