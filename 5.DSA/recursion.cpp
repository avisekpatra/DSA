#include<iostream>
using namespace std;

int rec(int n)
{
   if(n>0)
   {
       rec(n-1);
       cout<<n<<"\t";

   }
}

int main()
{
    rec(5);
    return 0;
}