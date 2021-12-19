#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float a,b,c,root1,root2;
    cout<<"Enter the coficent of x*x the x then the constant \n";
    cin>>a>>b>>c;
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots of the Equation "<<a<<"x*x + "<<b<<"x + "<<c<<" are "<<endl;
    cout<<root1<<" and "<<root2<<endl;
   
    return 0;
}