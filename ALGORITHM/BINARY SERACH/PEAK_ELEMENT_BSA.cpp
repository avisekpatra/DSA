#include<bits/stdc++.h>
using namespace std;

int peakelemnt(int arr[],int n, int start,int end)
{    
    int mid = start + (end-start)/2;
    if(n==1)
    return 0;

    if((mid < n-1 && arr[mid] >=arr[mid+1]) && (mid>0 && arr[mid] >=arr[mid-1]) )
    return mid;
    else if(mid==0 && mid+1<= n-1 && arr[mid]>=arr[mid+1])
    return 0;
    else if(mid==n-1 && mid-1>=0 && arr[mid]>=arr[mid-1])
    return n-1;
    else if(arr[mid]<=arr[mid+1])
    {
        return peakelemnt(arr,n,mid+1,end);
    }
    else
    {
        return peakelemnt(arr,n,start,mid-1);
    }

}

int main()
{
    int a[]={2,1};
    int n= sizeof(a)/sizeof(a[0]);
    int start=0;
    int end=n-1;
    cout<<a[peakelemnt(a,n,start,end)]<<endl;

    return 0;
}