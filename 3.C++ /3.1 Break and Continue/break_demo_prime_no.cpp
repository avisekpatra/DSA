#include<iostream>
using namespace std;

int main ()
{
int n;
cin>>n;
bool flag=1;
int i=2;
for(;i<n;i++)
{
    if(n%i==0)
    {   
    break;        //if the condition is satisfied then it will totally terminate the loop
    }
}

if(i==n)      //as we know the the condition will be false when i will be equal to n so the current value of i is n
cout<<"prime\n";
else
cout<<"not prime\n";
    return 0;
}