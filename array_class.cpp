// Array of class

#include <iostream>
using namespace std;

class marks
{
	public:
		
		int marks[3], id;
		string name;
			
		void input()
		{
			cout<<"Enter your Name : ";
			cin>>name;
								
			cout<<"Enter your Id : ";
			cin>>id;
									
			for(int i=0; i<3; i++)
			{
				cout<<"Enter Subject "<<i+1<<" Marks : ";
				cin>>marks[i];
			}	
		}
			
		void output()
		{
			cout<<endl<<"Name : "<<name<<endl;
			cout<<"Id : "<<id<<endl;
				
			for(int i=0; i<3; i++)
			{
				cout<<"Subject "<<i+1<<" Marks : "<<marks[i]<<endl;
			}
		}
};


int main()

{
	marks obj[3];
	
	for(int i=0; i<3; i++)
	{
		obj[i].input();
		cout<<endl;
	}
	
	for(int i=0; i<3; i++)
	{
		obj[i].output();
		cout<<endl;
	}
	
	return 0;
}









