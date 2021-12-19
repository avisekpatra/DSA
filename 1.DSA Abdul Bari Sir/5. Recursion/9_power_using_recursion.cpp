#include<bits/stdc++.h>
using namespace std;

int power(int n,int m)
{
    if(m==0)
    return 1;

    return n*power(n,m-1); 
}

//optimised version
int pow(int a,int n)
{
    if(n==0)
    return 1;
    if(n%2==0)  //if the n is even then we can pass a*a and n/2 
    return pow(a*a,n/2); 

    return a*pow(a*a,(n-1)/2); //so when any odd no it will come across that is definately with 1 it will then it will retun some value

}

int main()
{
   cout<<pow(2,4)<<endl;
    return 0;
}