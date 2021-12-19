#include<bits/stdc++.h>
using namespace std;

float taylor(int x,int n)
{   static int p=1,f=1;
    if(n==0)
    return 1;
    else
    {
     float r=taylor(x,n-1);
     p*=x;
     f*=n;
     return (float)p/f + r; 
    }
}

// int fibo(int n)
// {
//     if(n==0 || n==1)
//     return n;
//     else
//     return fibo(n-1)+fibo(n-2);
// }

int A[100]={-1};

int fibo(int n)
{
   
    if(n==0 || n==1)
    return n;
    
    else
    {
        if(A[n-1]==-1)
        A[n-1]=fibo(n-1);
        
        if(A[n-2]==-1)
        A[n-2]=fibo(n-2);

        return A[n-1]+A[n-2];
    }

}

int main()
{
    cout<<fibo(8)<<endl;
    return 0;
}