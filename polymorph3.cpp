// Using different Operator in OP overloading

#include <iostream>
using namespace std;

class OP
{
	public:
		void operator =()
		{
			cout<<10;
		}
};

int main()
{
	OP obj;
	obj.operator =();
	
	return 0;
}
