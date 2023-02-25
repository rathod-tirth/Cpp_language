// Hybrid Inheritence

#include <iostream>
using namespace std;

class A
{
	public:
		int a,b;
};

class B : public A
{
	public:
		void get1()
		{
			cout<<"Enter no. ";
			cin>>a;
		}
};

class C : public A
{
	public:
		void get2()
		{
			cout<<"Enter no. ";
			cin>>b;
		}
};

class D : public B, public C
{
	public:
		void add()
		{	
			cout<<B::a<<" + "<<C::b<<" = "<<B::a+C::b<<endl;
		}
};

int main()
{
	D obj;
	
	obj.get1();
	obj.get2();
	obj.add();
	
	
	return 0;
}









