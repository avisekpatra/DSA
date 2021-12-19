#include<iostream>
using namespace std;

void prime(int m,int n)
{
for(int num=m;num<=n;num++)
{
    bool check=1;
    for(int j=2;j<num;j++)
    {
        if(num%j==0)
        {
            
            check=0;
            break;
        
        }
    }

    if(check)
    cout<<num<<endl;
}
    
}


int main()
{
    int a,b;  // from a to b
    cin>>a>>b;

    prime(a,b);
}