// find the vowel

#include <iostream>
using namespace std;

int main()

{
    char a;

    cout<<"Enter a letter : ";
    cin>>a;

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        cout<<a<<" is a vowel";
    }   else
    {
        cout<<a<<" is a consonant";
    }
    
    return 0;
}
