#include<bits/stdc++.h>
using namespace std;

void reverse_array(int *arr,int n)
{
    if(n<=0)
    return;

    int i=0;
    int j=n-1;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int a[]={1,2,3,4};
    reverse_array(a,4);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}