#include<iostream>
using namespace std;

bool prime(int n)
{
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;
        break;
    }
}
return true;
}

int main()
{
    int n;
    cin>>n;

   if(prime(n))
   cout<<"prime no\n";
   else
   cout<<"not prime no\n";
   
    return 0;
}