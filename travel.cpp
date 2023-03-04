// Travel Agency

#include <iostream>
using namespace std;

class Welcome
{
	public:
		int o;
		char m, n;
		string name, email, email2, pswd, pswd2, contact, address;
		
		void show()
		{
			cout<<"\n\n-------Welcome to Apple Travel Agency-------\n\n";
			cout<<">> Popular Destination : \n\n";
			cout<<"1 Ahmedabad\n2 Surat\n3 Ambaji\n4 Abu\n5 Saputara\n6 Dwarka\n7 Gir\n8 Kutch\n9 Diu & Daman\n10 Sabarmati Dam\n";
		}
};

class Info : public Welcome
{
	public: 
		void get()
		{
			cout<<"\nDo you want Membership? [y/n] : ";
			cin>>m;

			if(m=='y')
			{
				cout<<"\n\n============================================\n\n";
				cout<<"----------------Registration----------------\n\n";
				
				cout<<"Enter Name : ";
				cin>>name;
				
				cout<<"Enter e-mail/user_name : ";
				cin>>email;
				
				cout<<"Enter Password : ";
				cin>>pswd;
				
				cout<<"Enter Contact : ";
				cin>>contact;
				
				cout<<"Enter Address : ";
				cin>>address;
				
				cout<<"\nThank You For Your Registration \n";
			}
			else
			{
				cout<<"\nThanks For Visiting Us...\n";
			}
		}
};

class Login : public Info
{
	public:
		void login()
		{
			if(m=='y')
			{
				cout<<"\n\n-------------------Login--------------------\n\n";
				
				cout<<"Enter e-mail/user_name : ";
				cin>>email2;
				
				cout<<"Enter Password : ";
				cin>>pswd2;
				
				if(email2==email && pswd==pswd2)
				{
					cout<<"\nACCESS GRANTED\n";
				}
				else
				{
					cout<<"\nACCESS DENIED\n";
				}
			}
			
		}
};

int main()
{
	Login obj;
	
	obj.show();
	obj.get();
	obj.login();
	
	return 0;
}
