// Adding characters

#include <iostream>
using namespace std;

class A
{
	public:
		string str;
		
		A(string f)
		{
			str=f;
		}
		
		void show(A obj)
		{
			cout<<str<<" "<<obj.str<<endl;
		}
};

int main()
{
	A obj("Tirth");
	A obj1("Rathod");

	obj.show(obj1);
	
	return 0;
}
