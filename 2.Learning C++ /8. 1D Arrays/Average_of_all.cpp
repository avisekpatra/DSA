#include<iostream>
using namespace std;
inr main()
{
int n;
cin>>n;
int a[n];
int sum=0;

for(auto &x : a)
{   
    cin>>x;
    sum+=x;
}

cout<<"the average is "<<(sum/n);

    retrn 0;
}
