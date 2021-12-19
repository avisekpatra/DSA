#include<iostream>
#include<cmath>
int main()
{
float a,b,x,d;
cout<<"enter 3 values \n";
cin>>a>>b>>c;
d= b*b-4*a*c;
if(d>0)
cout<<"roots are "<< (-b+sqrt(d))/2*a << " and "<<(-b-sqrt(d))/2*a<<endl;
else if(d==0)
cout<<"roots are same that is "<<-b/(2*a)<<endl;
else
cout<<"Roots are imaginary \n";

    return 0;
}