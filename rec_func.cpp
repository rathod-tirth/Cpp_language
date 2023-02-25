//	Recrusive function

#include <iostream>
using namespace std;

int fact(int a)

{
	if(a<1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}

int main()

{
	
	int a;
	
	cout<<"Enter any no : ";
	cin>>a;
	
	cout<<endl<<"Factorial : "<<fact(a);

	return 0;
}
