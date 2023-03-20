// alternative of using aggregation

#include <iostream>
using namespace std;

class A
{
	public:
		int a;
		
		A()
		{
			a=10;	
		}
};

class B
{
	public:
		A obj;				// object is created
		
		B(A obb)	// object as parameter
		{
			obj=obb;		// object in class B = object in parameter
			cout<<obj.a;
		}
};

int main()
{
	A ob0;
	
	B ob(ob0);			// passing object as parameter
	
	return 0;
}
