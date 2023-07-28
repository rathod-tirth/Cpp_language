// Using different Operator in OP overloading

#include <iostream>
using namespace std;

class OP
{
	public:
		int a;
		
		OP()
		{
			a=10;
		}
		void operator ()(OP obj)
		{
			cout<<obj.a<<endl;
		}
};

int main()
{
	OP obj1,obj2;
	
	obj1.operator ()(obj1);
	
//	obj1()obj2;
	
	return 0;
}
