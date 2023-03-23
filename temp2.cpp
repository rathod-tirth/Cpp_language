// Template

// 2. Function Template

#include <iostream>
using namespace std;

template <typename T>

T call()
{
	T a,b;
	
	a=10; b=15;
	
	cout<<a<<endl<<b;
}

int main()
{
	call<int>();
	
	return 0;
}
