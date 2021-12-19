#include<iostream>
using namespace std;

//given array is biotonic
//and we have to find the max elemnt

int maxPeak(int arr[],int n)
{

    if(n==1)
    return arr[0];

    int start=0;
    int end=n-1;

    while (start<=end)
    {
       int mid = start + (end-start)/2;
        
       if(mid>0 && mid<n+1 && arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
       return arr[mid];

       else if(mid==0 && mid+1<=n-1 && arr[mid]>arr[mid+1])
       return arr[mid]; 
       else if(mid==n-1 && mid-1>=0 && arr[mid]>arr[mid-1])
       return arr[mid];

       else if(mid+1<=n-1  && arr[mid+1]>arr[mid])
       {
           start=mid+1;
       }
       else if(mid-1>=0 && arr[mid-1]>arr[mid])
       {
           end=mid-1;
       }       
    }

}

int main()
{
    int a[]={17,16,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxPeak(a,n)<<endl;
}