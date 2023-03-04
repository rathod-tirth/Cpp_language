/*
>>	Destructor : "It is called automatically when an object is going to be destroyed."
		
	- Always in public mode
	- Name is always same as class name
	- No return type
	- tilde(~) sign to represent
*/

#include <iostream>
using namespace std;

class A
{
	public:
		
		A()
		{
			cout<<"Constructor Executed"<<endl;
		}

		~A()
		{
			cout<<"Destructor Executed"<<endl;
		}
};

int main()
{
	A obj;
	A obj1;

	return 0;
}

// Destuctor is called very end of main function cause an object only goes out of scope at the end of function.





