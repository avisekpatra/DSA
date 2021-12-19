#include<iostream>

using namespace std;

int main()
{
    char name[30]="avisek patra";
    char str[]={'a','b','c','\0'}; //must include this \0 at the end of a string while storing in this format
    cout<<name<<endl;
    cout<<str<<endl;

    //taking input in char array
    char c[10];
    cin>>c; //now this only take the 1st word that is if you write an line or paragarap it wont take it
    cout<<"input taken in cin "<<c<<endl;   
    
    
    //to take a complete paragraph use gets() function
    gets(c);
    cout<<"input taken using gets()"<<c<<endl;
    return 0;

}