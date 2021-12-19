#include<iostream>
using namespace std;
void factor(int n)
{
int sum = 0;
int no=1;
for(int i=1;i<=n;i++)
{ 
    if(n%i==0)
    {
        cout<<i<<" ";
     sum+=i;
     no*=i;
    }
}
cout<<endl;
cout<<"sum is "<<sum<<endl;
cout<<"product is "<<no<<endl;

}

int main()
{
int n;
cin>>n;
cout<<"factors are ";
factor(n);

   return 0;
}