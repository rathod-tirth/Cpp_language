// Arithmetic ops

#include <iostream>
using namespace std;

int main()

{
	float a, b;
	
	cout<<"Enter no. : ";
	cin>>a;
	
	cout<<"Enter no. : ";
	cin>>b;
	
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;	// The variable is declared as float still, there is no decimal(.)
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;	//	It rounds-ups reccuring numbers
	
	return 0;
}
