#include<bits/stdc++.h>
using namespace std;


void subarrary(int arr[],int n,int k)
{
int i=0;
int j=0;
int sum=0;
while(j<n)
{
    sum=sum+arr[j];
    if(sum==k)
    {
      cout<<i<<" and "<<j<<endl;  
      return;
    }
    else if(sum<k)
    {
        j++;
    }
    else if(sum>k)
    {
        sum=sum-arr[i];
        i++;
        j++;
    }
}
cout<<"not found\n";
}

int main()
{
    int a[]={1,4,20,3,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    subarrary(a,n,33);

    return 0;
}
