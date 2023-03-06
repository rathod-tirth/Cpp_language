// Return object

#include <iostream>
using namespace std;

class Return
{
	public:
		int a;
		
		Return(int g)
		{
			a=g;
		}
		
		Return show()
		{
			Return obj();
			
			return obj;
		}
};

int main()
{
	Return obj1(55),obj2(10);
	
	cout<<obj2.a<<endl;	// obj2 original value. Here, a=10
	
	obj2=obj1.show();
	
	cout<<obj2.a<<endl;	// obj2 = obj1. Herer, a=55
	
	return 0;
}
