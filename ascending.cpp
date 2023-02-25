// Shoting of array in Ascending Order

#include <iostream>
using namespace std;

int main()

{
	int a[5], i, j, temp;
	
	for(i=0; i<5; i++)
	{
		cout<<"Enter any no. : ";
		cin>>a[i];	
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<endl<<"Ascending Order : ";
	
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;	
}







