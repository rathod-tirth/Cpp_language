//	Copy Constructor

#include <iostream>
using namespace std;

class A
{
	public:
		float a,b;
		
		A()
		{	
			cout<<"Enter no. : ";
			cin>>a;
			
			cout<<"Enter no. : ";
			cin>>b;
		}
		
		A(A &obj)	// Copy constructor
		{
			cout<<endl<<obj.a<<" + "<<obj.b<<" = "<<obj.a+obj.b<<endl;
			cout<<endl<<obj.a<<" - "<<obj.b<<" = "<<obj.a-obj.b<<endl;
			cout<<endl<<obj.a<<" * "<<obj.b<<" = "<<obj.a*obj.b<<endl;
			cout<<endl<<obj.a<<" / "<<obj.b<<" = "<<obj.a/obj.b<<endl;
		}
};

int main()
{
	A obj, obj1(obj);
	
	return 0;
}







