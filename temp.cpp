// Template

#include <iostream>
using namespace std;

template <typename T>

class A
{
	public:
		T a;
};

int main()
{
	A <int>ob0;
	ob0.a=10;
	cout<<ob0.a<<endl;
	
	A <char>ob1;
	ob1.a='p';
	cout<<ob1.a<<endl;
	
	cout<<ob0.a<<endl;
	return 0;
}
