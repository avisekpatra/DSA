#include<bits/stdc++.h>
using namespace std;

int lastOcurance(int arr[],int n,int key)
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

       if(arr[mid]==key)  //if element is found we will check does it have the same elemnt in just next index
       {
           if(arr[mid+1]==key)   //if yes then we will continue the binary search and modify the start
           start=mid+1;   
           else
           return mid;    //if no same elemnt in the just right side mens this is the lastt occurance
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
    cout<<"10 last occur at the index "<<lastOcurance(a,n,10)<<endl;
    return 0;
}