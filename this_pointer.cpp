// This pointer

#include <iostream>
using namespace std;

class S
{
	public:
		int a;
		
		int show(int a)
		{
			this->a=a;
			a+=10;
			
			cout<<this->a<<endl<<a;
		}
};

int main()
{
	S ob;
	
	ob.show(32);
	
	return 0;
}
