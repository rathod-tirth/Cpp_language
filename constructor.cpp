/*
>>	Consturctor : "It is called automatically when an object is created."
	
	- Always in public mode
	- Name is always same as class name
	- No return type
	
	Types of Constructor :
	
	1. Default (w/o parameter)
	2. Parameterized con.
	3. Copy con.
*/

#include <iostream>
using namespace std;

class A
{
	public:
		int a, b;
		
		A()	//	Default Constructor
		{
			cout<<"-----Addition-----\n\n";
		}
		
		A(int m, int n)	// Parameterized Constructor
		{
			a=m;
			b=n;
			
			cout<<endl<<a<<" + "<<b<<" = "<<a+b;
		}
};

int main()
{
	int a,b;
	
	A obj;
	
	cout<<"Enter no. : ";
	cin>>a;
	
	cout<<"Enter no. : ";
	cin>>b;

	A obj1(a,b);
		
	return 0;
}





