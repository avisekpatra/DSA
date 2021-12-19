#include<bits/stdc++.h>
using namespace std;

double taylor(int x,int n)
{
    static double p=1,f=1;
    int r;
    if(n==0)
    return 1;
    else
    {
    r = taylor(x,n-1);
    p*=x;
    f*=n;
    return r + p/f;
    }
}

int main()
{
    cout<<taylor(2,4)<<endl;
    return 0;
}