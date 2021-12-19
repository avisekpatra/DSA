#include<bits/stdc++.h>
using namespace std;
//q1
int q1(int n)
{
    static int i=1;
    if(n>=5) return n;

    n=n+i;
    i++;
    return q1(n);
}
//Q2
void q2(int n,int sum)
{
    int k=0,j=0;
   if(n==0) return;
   k=n%10;
   j=n/10;
   sum=sum+k;
   q2(j,sum);
   cout<<k<<"\t";
}

//q3
int q3(int &x,int c)
{
    c=c-1;
    if(c==0)
    return 1;
   
    x=x+1;
    return q3(x,c)*x;
}
int main()
{    
    //q1
    cout<<"solution to q1 "<<q1(1)<<endl;
    
    //q2
    cout<<"solution for q2 ";
    q2(2048,0);
    
    //q3
    int p = 5;
    cout<<"solution of q3 is "<<q3(p,p)<<endl;

    cout<<endl;
    return 0;
}