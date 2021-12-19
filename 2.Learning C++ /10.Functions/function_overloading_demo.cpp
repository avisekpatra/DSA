#include<iostream>
using namespace std;

//sum of no
int add(int a,int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}

float add(float a, float b)
{
    return a+b;
}

//minimum of no
int min(int a,int b)
{
    return a<b?a:b ;
}

float min(float a,float b)
{
     return a<b?a:b ;
}

int min(int a,int b,int c)
{

    if(a>b && a>c)
    return a;
    
    else if(b>c)
    return b;
    
    else 
    return c;

}


int main()
{
    int a,b,c;
cout<<"enter 3 integer";
ci>>a>>b>>c;

cout<<add(a,b);
cout<<add(a,b,c);

float p,q;
cout<<"enter 2 float";
cin>>p>>q;
cout<<add(p,q);

    return 0;
}
