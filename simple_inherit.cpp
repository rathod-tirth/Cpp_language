// Simple Inheritance

#include <iostream>
using namespace std;

class A
{
	public:	
		int a;
		
		void get()
		{
			cout<<"Enter no. : ";
			cin>>a;
		}
};

class B: public A
{
	public:
		void square()
		{
			cout<<"Square = "<<a*a;
		}
};

int main()
{
	B obj;

	obj.get();
	obj.square();
	return 0;
}






