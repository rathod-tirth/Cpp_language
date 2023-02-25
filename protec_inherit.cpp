// Inheritance with protected class

#include <iostream>
using namespace std;

class A
{
	protected:
		int a,b;
};

class B : public A
{
	public:
		
		void get()
		{
			cout<<"Enter no. : ";
			cin>>a;
			
			cout<<"Enter no. : ";
			cin>>b;
		}
		
		void add()
		{
			cout<<endl<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
};

int main()
{
	
	B obj2;
	
	obj2.get();
	obj2.add();
	
	return 0;
}
