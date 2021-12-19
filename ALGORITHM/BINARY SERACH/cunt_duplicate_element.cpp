#include<bits/stdc++.h>
using namespace std;
//function to get the first occurance index
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

//function to get the last occurance index
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

int countDuplicateElemnt(int arr[],int n,int key)
{
    if(n==1 && arr[0]==key)
    return 1;
  


    int first= firstOcurance(arr,n,key);
    int last= lastOcurance(arr,n,key);
    //repeatation is in the range from first occurance and lastocuurance
    return last-first + 1; //as array are 0 based indexing
}



int main()
{
    int a[]={1,2,3,10,10,10,10,12,13};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"10 occur "<<countDuplicateElemnt(a,n,10)<<" times"<<endl;
    return 0;
}