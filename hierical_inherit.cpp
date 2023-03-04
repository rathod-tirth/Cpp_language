// Hierarchical Inheritence

#include <iostream>
using namespace std;

class A
{
	public:
		int a,b;
		
		void get()
		{	
			a=5;
			b=10;
		}
};

class B : public A
{
	public:
		void add()
		{
			cout<<endl<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
};

class C : public A
{
	public:
		void sub()
		{
			cout<<endl<<a<<" - "<<b<<" = "<<a-b<<endl;
		}
};

class D : public A
{
	public:
		void mul()
		{
			cout<<endl<<a<<" * "<<b<<" = "<<a*b<<endl;
		}
};

int main()
{
	B obj;
	obj.get();
	obj.add();
	
	C obj1;
	obj1.get();
	obj1.sub();
	
	D obj2;
	obj2.get();
	obj2.mul();
	
	return 0;
}








