#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numerator \n";
    cin>>a;
    cout<<"Enter the Denominator \n";
    cin>>b;
    if(b==0)
    cout<<"Division with Zero can not be Possible \n";
else
{
    cout<<a/b<<" is the division result \n";
}
return 0;
}