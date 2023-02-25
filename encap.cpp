// Encapsulation

#include <iostream>
using namespace std;

class A
{
	public:
		int a;
		
		void get()
		{
			cout<<"Enter any no. : ";
			cin>>a;
		}
		
		void show()
		{
			cout<<a;
		}
};

int main()
{
	A obj;
	
	obj.get();
	obj.show();
	
	return 0;
}





