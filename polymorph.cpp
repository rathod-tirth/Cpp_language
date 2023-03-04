/*
>> Polymorphism : Polymorphism refers to a single function or multi-functioning operator performing in different ways.

>> Types :

	1. Overloading
		- Method Overloading
		- Operator Overloading
	
	2. Overidding
*/

#include <iostream>
using namespace std;

// Method Overlaoding

class A
{
	public:
		void show()
		{
			cout<<20<<endl;
		}
		
		void show(int a)
		{
			cout<<a<<endl;
		}
		
		void show(int a, int b, int c=0)
		{
			cout<<a+b+c<<endl;
		}
};

int main()
{
	A obj;
	
	obj.show();
	obj.show(15);
	obj.show(16,9);
	obj.show(4,2,15);
	
	return 0;
}
