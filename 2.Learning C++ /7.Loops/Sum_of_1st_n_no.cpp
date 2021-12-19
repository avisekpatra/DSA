#include<iostream>
using namespace std;

int sum(int n)
{int sum=0;
    for(int i =1;i<=n;i++)
    {
     sum+=i;
    }
    //using while loop
    // int i=1;
    // while(i<=n)
    // {
    //     sum=sum+i;
    //     i++;
    // }

    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}