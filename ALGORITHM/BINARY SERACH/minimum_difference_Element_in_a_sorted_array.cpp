#include<bits/stdc++.h>
using namespace std;

int minDiffElement(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;

    while (start<=end)
    {
        int mid= start+ (end-start)/2;

        if(arr[mid]==key)
        return arr[mid];
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
    }
    int res1=abs(key-arr[start]);
    int res2= abs(key-arr[end]);
    if (res1<res2)
      return arr[start];
      else
      return arr[end];
}
int main()
{
    int a[]={1,3,8,10,15};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minDiffElement(a,n,12)<<endl;
    return 0;
}

