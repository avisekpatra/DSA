#include<bits/stdc++.h>
using namespace std;

int repeating(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int a[max+1];
    for(int i=0;i<max+1;i++)
    {
        a[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[arr[i]]!=-1)
        min= a[arr[i]];


    }




}

int main()
{
    int a[]={1,5,3,4,3,5,6,1,-1,-1};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<repeating(a,n)<<endl;

    return 0;

}
