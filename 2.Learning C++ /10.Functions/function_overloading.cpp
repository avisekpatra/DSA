#include<iostream>
using namespace std;

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

int main()
{
    cout<<sum(6,7)<<endl;
    cout<<sum(5.7f,7.9f);
    cout<<sum(2,7,4)
}