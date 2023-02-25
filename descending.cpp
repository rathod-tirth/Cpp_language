//	Shorting of array in Descending order

#include <iostream>
using namespace std;

int main()

{
	int a[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter any no. : ";
		cin>>a[i];
	}

	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(a[j]>a[i])
			{
				int temp;
				
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"Descending Order : ";
	
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}









