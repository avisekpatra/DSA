#include<iostream>
using namespace std;

int power(int m,int n)
{   int product=1;
    for(int i=1;i<=n;i++)
    {
      product=product*m;
    }

    return product;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"m to the power n is "<<power(m,n)<<endl;
    return 0;
}