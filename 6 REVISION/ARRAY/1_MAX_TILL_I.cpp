#include<bits/stdc++.h>
using namespace std;

/*
int find_max(int arr[],int end)
{
    int max=INT_MIN;
    for(int i=0;i<=end;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
*/

int* MaxTillI(int arr[],int n)
{
    int *p = new int(n);
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++)
    {
       max_ele= max(arr[i],max_ele);
       p[i]=max_ele;
    }
    return p;
}


int main()
{
    int arr[]={12,3,5,24,45,78,5,32};
    int n= sizeof(arr)/sizeof(arr[0]);
    int *q = MaxTillI(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
    return 0;
}