// Passing object in a function

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
		
		void set(A obj)
		{
			cout<<obj.a<<endl;
		}
};

class B
{
	public:
		int a;
		
		B(int m)
		{
			a=m;
		}
		
		void set(B obj)
		{
			cout<<a<<" "<<obj.a<<endl;
		}
};

int main()
{
	A obj;
	obj.set(obj); // Passing same object as parameter
	
	B obj1(5);
	B obj2(10);
	
	obj1.set(obj2); // Passing different object as parameter
	return 0;
}
