#include<iostream>
using namespace std;

int pow(int a,int n)
{
    if(n==0)
    return 1;
    
    else if(n==1)
    return a;
    
    else if(n%2==0)
    return pow(a*a,n/2);
    
    else if(n%2==1)
    return a*pow(a*a,n/2);
}

int main()
{
    cout<<pow(5,3)<<endl;


return 0;

}