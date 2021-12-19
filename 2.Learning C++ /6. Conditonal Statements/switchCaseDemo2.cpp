#include<iostream>
using namespace std;

int main()
{
cout<<"MENU \n 1. Add\n 2. Sub\n 3. Mul\n 4. Div\n";
int n,a,b;
cout<<endl;
cout<<"Enter your Option \n";
cin>>n;
cout<<endl;
cout<<"Enter Two Nos\n";
cin>>a>>b;
cout<<endl;
cout<<"Result is \n";
switch(n)
{
    case 1 : cout<<a+b<<endl;
    break;
    case 2: cout<<a-b<<endl;
    break;
    case 3: cout<<a*b<<endl;
    break;
    case 4: cout<<a/b<<endl;
    break;
    default : cout<<"inavalid\n";
}

    return 0;
}