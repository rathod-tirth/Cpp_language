// Travel Agency

#include <iostream>
using namespace std;

class Travel
{
	public:
		char y;
		void show()
		{
			cout<<"\n\n-------Welcome to Apple Travel Agency-------\n\n";
			cout<<">> Popular Destination : \n\n";
			cout<<"1 Ahmedabad\n2 Surat\n3 Ambaji\n4 Abu\n5 Saputara\n6 Dwarka\n7 Gir\n8 Kutch\n9 Diu & Daman\n10 Sabarmati Dam";
		}
		
		void get()
		{
			cout<<"Do you want Membership? [y/n] : ";
			cin>>y;
			
			if(y==y)
			{
				cout<<"\n\n============================================\n\n";
				cout<<"----------------Registration----------------"
			}
		}
};

int main()
{
	Travel obj;
	obj.show();
	
	return 0;
}
