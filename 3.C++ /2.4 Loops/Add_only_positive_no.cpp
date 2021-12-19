//to print positive no,when negative no is taken then stop the loop
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    
    while(n>0)
    {
    sum+=n;
    cout<<n;
    cin>>n;
    }

    cout<<sum<<endl;
    return 0;
}