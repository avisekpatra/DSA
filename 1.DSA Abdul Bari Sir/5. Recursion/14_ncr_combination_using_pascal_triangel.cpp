//ncr using recursion

#include<bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    if(r==0 || r==n)  //comparing the pascal triangle we have obsereved that the the edge elemnt i.e when r=0 or n=r then its value is 1
    {
        return 1; 
    }
    else
    return ncr(n-1,r-1) + ncr(n-1,r);  //we haev got the formulae from the  pascal triangel by taking one example and find ing how it become the no
}

int main()
{
    cout<<ncr(4,2)<<endl;
    return 0;
}