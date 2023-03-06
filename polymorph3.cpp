// Using different Operator in OP overloading

#include <iostream>
using namespace std;

class OP
{
	public:
		int a;
		
		OP(int g)
		{
			a=g;
		}
		void operator =(OP obj)
		{
			cout<<obj.a+a<<endl;
		}
};

int main()
{
	OP obj1(5),obj2(10);
	
	obj1=obj2;
	
	obj1.operator =(obj2);
	
	return 0;
}
