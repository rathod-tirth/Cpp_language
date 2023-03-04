// Access Modifiers

/*
>>	Public : These are accessible throughout the program
		
>>	Private : These are only accessible inside the class in which they are defined
		
>>	Protected : These are accessible to the class in which they are defined and also accessible to the child class but, not 
				outside of parent or child class
*/

#include <iostream>
using namespace std;

class A
{
	private:
		int a;
		
	protected:
		int b;
		
	public:
		int c;
		
		void get()
		{
			c=10;
		}
};

class B : public A
{
	public:
		void show()
		{
			b=10;
			cout<<b<<" + "<<c<<" = "<<b+c;
		}
};

int main()
{

	B obj;
	
	obj.get();
	obj.show();
		
	return 0;
}






