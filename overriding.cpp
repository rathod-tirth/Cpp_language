// Overriding

#include <iostream>
using namespace std;

class gg
{
	public:
		
		void show() // here show() got overridden
		{
			cout<<"Good Game"<<endl;
		}
};

class wp: public gg
{
	public:
		void show()
		{
			cout<<"Well Played"<<endl;
		}
};

int main()
{
	wp obj;
	
	obj.show();
	
	return 0;
}
