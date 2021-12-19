#include<iostream>
using namespace std;

void swap(int &a,int &b)   //& means now we can modify the values we are grtiing
{
int temp = b;
b=a;
a=temp;
}

int max(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}

int sum(int a,int b)
{
    return a+b;
}

int arraySum(a[],n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}


int main()
{
int x,y;
cin>>x>>y;

swap(x,y);
cout<<x<<" "<<y<<endl;

    return 0;
}