//perfect no is a no when the sum of factors is equal to the double of the no iteself 

#include<iostream>
using namespace std;

bool perfect(int n)
{   int sum_of_factors=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
         sum_of_factors+=i;
        }
    }
if(sum_of_factors==(2*n))
return true;

else
return false;

}

int main()
{
    int n;
    cin>>n;

if(perfect(n))
cout<<"perfect\n";
else
cout<<"not perfect\n";
    return 0;
}
