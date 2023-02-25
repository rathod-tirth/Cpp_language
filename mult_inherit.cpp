// Multiple Inheritance

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

class B
{
	public:
		int b;
		void get2()
		{
			cout<<"Enter no. : ";
			cin>>b;
		}
};

class C : public A, public B
{
	public:
		void add()
		{
			cout<<a+b;
		}
};

int main()
{
	C obj;
	
	obj.get();
	obj.get2();
	obj.add();
	
	return 0;
}
