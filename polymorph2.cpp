/*
>>	Operator Overloading :
	- Operators which cannot be overloaded
	- :: scope resolution
	- ?: ternary operator
	- sizeof()
	- . membership
*/	


#include <iostream>
using namespace std;

class A
{
	public:
		int a;

		A(int g)
		{
			a=g;
		}
		
		void operator +(A obj)
		{
			cout<<obj.a+a<<endl;
		}
		
		void add(A obj)
		{
			cout<<obj.a+a<<endl;
		}
};

int main()
{
	A obj1(5);
	A obj2(3);
	
	obj1+obj2;	// 1.
	obj1.operator +(obj2);	// 2.
	
	obj1.add(obj2);	// 3.

// 1 and 2 are same but 1 reduces code
// 3 is w/o operator overloading but still the same
	
	return 0;
}
