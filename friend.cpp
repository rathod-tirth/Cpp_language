// Friend Function can access private members of a class

#include <iostream>
using namespace std;

class A
{
	private:
		int a;
	
	friend void show(A obj); // void show() is not part of class A. Here, we define relation of void show() with class A.
};

void show(A obj)
{
	obj.a=10;
	cout<<obj.a;
}

int main()
{
	A ob;
	
	show(ob);
	
	return 0;
}
