// getline() function

#include <iostream>
#include <string>	// no need to add for char
using namespace std;

int main()
{
	char details1[100];
	string details2;
	
	cout<<"Enter details : ";
	cin.getline(details1,100);	//	for char
	
	cout<<"Enter details : ";
	getline(cin, details2);		//	for string
	
	cout<<endl<<"Char details : "<<details1<<endl;
	cout<<"String details : "<<details2<<endl;	
	
	return 0;
}
