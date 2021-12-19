#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
if(n==1)
return 1;
else
return sum(n-1) + n;

}

int main()
{
    int n;
    cin>>n;
    cout<<endl<<sum(n)<<endl;
    return 0;

}