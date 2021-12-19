#include<bits/stdc++.h>
using namespace std;

int firstOcurance(int arr[],int n,int key)
{
    if(n==1)
    {
        if(arr[0]==key);
        return 0;
    }

    int start=0;
    int end=n-1;

    while (start<=end)
    {
       int mid = start + (end-start)/2;

       if(arr[mid]==key)
       {
           if(arr[mid-1]==key)
           end=mid-1;
           else
           return mid;
       }
       else if(key>arr[mid])
       {
           start=mid+1;
       }
       else
       {
           end=mid-1;
       }
    }

    return -1;   
}


int main()
{
    int a[]={1,2,3,10,10,10,10,12,13};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"10 first occur at the index "<<firstOcurance(a,n,10)<<endl;
    return 0;
}