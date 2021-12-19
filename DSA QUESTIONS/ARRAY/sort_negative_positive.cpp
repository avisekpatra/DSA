#include<bits/stdc++.h>
using namespace std;


void swaping(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void sorting(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while (i<j)
    {
        while (arr[i]<0)
        i++;

        while (arr[j]>0)
        j--;
        
        if(i<j)
        swaping(arr,i,j);
    }
    
}


int main()
{
    int arr[]={-1,3,7,1,-5,-3,1,7,-3};
    int n= sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    }