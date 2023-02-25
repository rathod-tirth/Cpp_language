// Multi-level Inheritance

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

class B : public A
{
	public:
		void add()
		{
			a+=10;		
		}
};

class C : public B
{
	public:
		void result()
		{
			cout<<"Addition with 10 : "<<a;
		}
}; 

int main()
{
	C obj;
	obj.get();
	obj.add();
	obj.result();
	
	return 0;
}
