//  Abstraction means displaying only essential information and hiding the details.

#include <iostream>
#include <math.h>
using namespace std;

// 1. Data Abstraction- hides the data
class A
{
	private:
		int a,b; // a and b are private members and can only be accessible by its class
		
	public:
		void set(int m, int n)
		{
			a=m;
			b=n;
		}
		
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
};

// 2. Control Abrstraction- hides the method

class B
{
	public:
		int a,b,c;
		
		void set()
		{
			b=3;
			c=2;
			cout<<"Enter no. : ";
			cin>>a;
			
			cout<<"Square = "<<pow(a,c)<<endl; // pow(a,c) hides the method of squaring
			cout<<"Cube = "<<pow(a,b)<<endl;
		}
		
};

int main()
{
	A ob;
	
	ob.set(15,10);
	ob.show();
	
	B ob0;
	
	ob0.set();
	
	return 0;
}
