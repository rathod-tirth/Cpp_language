// OOP concept

#include <iostream>
using namespace std;

class A
{		
	public:	
	int a;
	
	void show()
	{
		cout<<"Enter any no. : ";
		cin>>a;
		
		cout<<a<<endl;
	}
};

class B
{
	public:
		void show()
		{
			int a=10;
			
			cout<<a<<endl;
		}
};

int main()

{
	A obj;
	obj.show();
	
	B obj0;
	B obj1;
	B obj2;
	B obj3;
	
	obj0.show();
	obj1.show();
	obj2.show();
	obj3.show();
	
	return 0;
}





