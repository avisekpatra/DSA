#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"Enter 3 nos \n";
cin>>a>>b>>c;
if(a>b && a>c)
cout<<a<<" is greatest \n";
else
{
    if(b>c)
    cout<<b<<" is the greatest\n";
    else 
    cout<<c<<" is greatest \n";
}
 return 0;

}